/**
 *   Copyright 2011-2015 Quickstep Technologies LLC.
 *   Copyright 2015 Pivotal Software, Inc.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 **/

#include "types/FloatType.hpp"

#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <limits>
#include <string>

#include "types/NullCoercibilityCheckMacro.hpp"
#include "types/Type.hpp"
#include "types/TypeID.hpp"
#include "types/TypedValue.hpp"
#include "utility/EqualsAnyConstant.hpp"

#include "glog/logging.h"

// NetBSD's libc has snprintf, but it doesn't show up in the std namespace for
// C++.
#ifndef __NetBSD__
using std::snprintf;
#endif

namespace quickstep {

const TypeID FloatType::kStaticTypeID = kFloat;

bool FloatType::isSafelyCoercibleFrom(const Type &original_type) const {
  QUICKSTEP_NULL_COERCIBILITY_CHECK();
  return QUICKSTEP_EQUALS_ANY_CONSTANT(original_type.getTypeID(),
                                       kInt, kFloat);
}

TypedValue FloatType::coerceValue(const TypedValue &original_value,
                                  const Type &original_type) const {
  DCHECK(isCoercibleFrom(original_type))
      << "Can't coerce value of Type " << original_type.getName()
      << " to Type " << getName();

  if (original_value.isNull()) {
    return makeNullValue();
  }

  switch (original_type.getTypeID()) {
    case kInt:
      return TypedValue(static_cast<float>(original_value.getLiteral<int>()));
    case kLong:
      return TypedValue(static_cast<float>(original_value.getLiteral<std::int64_t>()));
    case kFloat:
      return original_value;
    case kDouble:
      return TypedValue(static_cast<float>(original_value.getLiteral<double>()));
    default:
      LOG(FATAL) << "Attempted to coerce Type " << original_type.getName()
                 << " (not recognized as a numeric Type) to " << getName();
  }
}

std::string FloatType::printValueToString(const TypedValue &value) const {
  DCHECK(!value.isNull());

  char printbuffer[kPrintWidth + 1];
  int written = snprintf(printbuffer,
                         sizeof(printbuffer),
                         "%.*g",
                         std::numeric_limits<float>::max_digits10,
                         value.getLiteral<float>());
  DCHECK_GE(written, 0) << "snprintf() encountered an encoding error";
  DCHECK_LT(static_cast<std::size_t>(written), sizeof(printbuffer))
      << "snprintf() would have written a string of length " << written
      << " (plus null-terminator), but buffer size is only " << sizeof(printbuffer);
  return std::string(printbuffer);
}

void FloatType::printValueToFile(const TypedValue &value,
                                 FILE *file,
                                 const int padding) const {
  DCHECK(!value.isNull());

  std::fprintf(file,
               "%*.*g",
               static_cast<int>(padding),
               std::numeric_limits<float>::max_digits10,
               value.getLiteral<float>());
}

bool FloatType::parseValueFromString(const std::string &value_string,
                                     TypedValue *value) const {
  float parsed_float;
  int read_chars;
  int matched = std::sscanf(value_string.c_str(),
                            "%f%n",
                            &parsed_float,
                            &read_chars);
  if ((matched != 1)
      || (static_cast<std::string::size_type>(read_chars) != value_string.length())) {
    return false;
  }

  *value = TypedValue(parsed_float);
  return true;
}

}  // namespace quickstep
