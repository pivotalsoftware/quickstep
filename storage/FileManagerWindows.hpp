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

#ifndef QUICKSTEP_STORAGE_FILE_MANAGER_WINDOWS_HPP_
#define QUICKSTEP_STORAGE_FILE_MANAGER_WINDOWS_HPP_

#include <cstddef>
#include <string>

#include "storage/FileManager.hpp"
#include "storage/StorageBlockInfo.hpp"
#include "utility/Macros.hpp"

namespace quickstep {

/** \addtogroup Storage
 *  @{
 */

/**
 * @brief An implementation of FileManager for Windows.
 **/
class FileManagerWindows : public FileManager {
 public:
  explicit FileManagerWindows(const std::string &storage_path)
      : FileManager(storage_path) {}

  ~FileManagerWindows() override {}

  bool deleteBlockOrBlob(const block_id block) override;

  bool readBlockOrBlob(const block_id block, void *buffer, const std::size_t length) override;

  bool writeBlockOrBlob(const block_id block, const void *buffer, const std::size_t length) override;

  std::size_t numSlots(const block_id block) const override;

  block_id_counter getMaxUsedBlockCounter(const block_id_domain block_domain) const override;

 private:
  DISALLOW_COPY_AND_ASSIGN(FileManagerWindows);
};

/** @} */

}  // namespace quickstep

#endif  // QUICKSTEP_STORAGE_FILE_MANAGER_WINDOWS_HPP_
