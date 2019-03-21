/**
 *   Copyright 2011-2015 Quickstep Technologies LLC.
 *   Copyright 2015 Pivotal Software, Inc.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       https://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 **/

#include "parser/ParserUtil.hpp"

#include "utility/SqlError.hpp"

// From SqlLexer
extern int quickstep_yyget_lineno(void *yyscanner);
extern int quickstep_yyget_column(void *yyscanner);

// From SqlParser
extern int quickstep_yyget_line_number(const YYLTYPE *yyloc);
extern int quickstep_yyget_column_number(const YYLTYPE *yyloc);

void quickstep_yyerror(const YYLTYPE *yyloc,
                       void *yyscanner,
                       quickstep::ParseStatement **statement,
                       const char *error_message) {
  // If the error location is explicitly provided, use it;
  // otherwise use the location stored in yyscanner.
  if (yyloc != nullptr) {
    throw ::quickstep::SqlError(quickstep_yyget_line_number(yyloc), quickstep_yyget_column_number(yyloc),
                                error_message);
  } else {
    throw ::quickstep::SqlError(quickstep_yyget_lineno(yyscanner), quickstep_yyget_column(yyscanner),
                                error_message);
  }
}
