// Alex Labitigan
// CPSC 120-12
// 2022-10-31
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 10-02
// Partners: @dianasuceli
//
// Counties Functions
//

#include "counties_functions.h"

std::string AllCountiesString(
    const std::vector<std::vector<std::string>> &ca_counties) {
  std::string all_counties_string;
  for (const std::string &county : ca_counties.at(0)) {
    all_counties_string += county + " ";
  }

  return all_counties_string;
}

int CountyIndex(const std::vector<std::vector<std::string>> &ca_counties,
                const std::string &match_county) {
  int index{-1};
  for (int i = 0; i < ca_counties[0].size(); i++) {
    if (ca_counties[0][i] == match_county) {
      return i;
    }
  }
  return index;
}