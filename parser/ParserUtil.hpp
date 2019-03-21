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

#ifndef QUICKSTEP_PARSER_PARSER_UTIL_HPP_
#define QUICKSTEP_PARSER_PARSER_UTIL_HPP_

namespace quickstep {
class ParseStatement;
}

struct YYLTYPE;

/** \addtogroup Parser
 *  @{
 */

/**
 * @brief Report a parsing error to STDERR.
 *
 * @param yyloc The error location, which may not be the same as the location in
 *              the token currently being scanned.
 * @param yyscanner The scanner context.
 * @param parsed_statement This parameter exists purely so that yyerror() will
 *        have the type signature expected by the parser, and is ignored.
 * @param s A string describing the error encountered.
 **/
void quickstep_yyerror(const YYLTYPE *yyloc,
                       void *yyscanner,
                       quickstep::ParseStatement **statement,
                       const char *error_message);

/** @} */

#endif  // QUICKSTEP_PARSER_PARSER_UTIL_HPP_
