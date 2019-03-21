#   Copyright 2014-2015 Quickstep Technologies LLC.
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#       https://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.

# Module to find Zookeeper C Binding.

find_path(ZOOKEEPER_INCLUDE_DIR zookeeper/zookeeper.h)

find_library(ZOOKEEPER_LIBRARY NAMES zookeeper_mt libzookeeper_mt)

set(ZOOKEEPER_LIBRARIES ${ZOOKEEPER_LIBRARY})
set(ZOOKEEPER_INCLUDE_DIRS ${ZOOKEEPER_INCLUDE_DIR})

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Zookeeper DEFAULT_MSG
                                  ZOOKEEPER_LIBRARY ZOOKEEPER_INCLUDE_DIR)

mark_as_advanced(ZOOKEEPER_INCLUDE_DIR ZOOKEEPER_LIBRARY)
