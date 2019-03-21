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

#ifndef QUICKSTEP_UTILITY_SHARDED_LOCK_MANAGER_HPP_
#define QUICKSTEP_UTILITY_SHARDED_LOCK_MANAGER_HPP_

#include <array>
#include <cstddef>
#include <functional>

#include "threading/SharedMutex.hpp"
#include "utility/Macros.hpp"

namespace quickstep {

/** \addtogroup Utility
 *  @{
 */

/**
 * @brief Maintains a fixed number of SharedMutex objects and an interface for
 *        mapping instances of the template class T to one of the underlying
 *        SharedMutex's. The mapping is done by calling std::hash<T>::operator()
 *        on the object.
 *
 * @param T The class to map to SharedMutex's.
 * @param N The number of SharedMutex's to use in the underlying array.
 * @param SharedMutexT The shared mutex class to use for locks.
 */
template <typename T, std::size_t N, typename SharedMutexT = SharedMutex>
class ShardedLockManager {
 public:
  /**
   * @brief Default constructor.
   */
  ShardedLockManager() { }

  /**
   * @brief Get the SharedMutex corresponding to the provided key.
   * @param  key The key to map to a SharedMutex.
   * @return     The corresponding SharedMutex.
   */
  SharedMutexT *get(const T key) {
    return &shards[hash_(key) % N];
  }

 private:
  std::hash<T> hash_;
  std::array<SharedMutexT, N> shards;

  DISALLOW_COPY_AND_ASSIGN(ShardedLockManager);
};

/** @} */

}  // namespace quickstep

#endif  // QUICKSTEP_UTILITY_SHARDED_LOCK_MANAGER_HPP_
