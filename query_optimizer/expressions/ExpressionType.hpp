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

#ifndef QUICKSTEP_QUERY_OPTIMIZER_EXPRESSIONS_EXPRESSION_TYPE_HPP_
#define QUICKSTEP_QUERY_OPTIMIZER_EXPRESSIONS_EXPRESSION_TYPE_HPP_

namespace quickstep {
namespace optimizer {
namespace expressions {

/** \addtogroup OptimizerExpressions
 *  @{
 */

/**
 * @brief Optimizer expression types.
 **/
enum class ExpressionType {
  kAggregateFunction,
  kAlias,
  kAttributeReference,
  kBinaryExpression,
  kCast,
  kComparisonExpression,
  kLogicalAnd,
  kLogicalOr,
  kLogicalNot,
  kPredicateLiteral,
  kScalarLiteral,
  kUnaryExpression
};

/** @} */

}  // namespace expressions
}  // namespace optimizer
}  // namespace quickstep

#endif /* QUICKSTEP_QUERY_OPTIMIZER_EXPRESSIONS_EXPRESSION_TYPE_HPP_ */
