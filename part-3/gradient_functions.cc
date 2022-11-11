// Alex Labitigan
// CPSC 120-12
// 2022-10-31
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 10-03
// Partners: @dianasuceli
//
// Gradient Functions
//

#include "gradient_functions.h"

bool HasMatchingFileExtension(const std::string &file_name,
                              const std::string &extension) {
  bool result{false};
  if (file_name.size() >= extension.size() &&
      file_name.compare(file_name.size() - extension.size(), extension.size(),
                        extension) == 0) {
    result = true;
  }
  return result;
}