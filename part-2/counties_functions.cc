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

  // TODO: Implement the function
  // Write a loop which takes the name of each county from the vector
  // ca_counties and adds it to all_counties_string along with a space.

std::string AllCountiesString(
    const std::vector<std::vector<std::string>>& ca_counties) {
  std::string all_counties_string;
for (int i = 0; i < ca_counties[0].size(); i ++) {
  all_counties_string += ca_counties[0][i] + " ";
}

  return all_counties_string;
}

  // TODO: Implement the function
  // Write a loop which goes through the ca_counties vector looking
  // for a match with the string match_county. When it finds a match,
  // return the index of the match. If it is not found, return -1.

int CountyIndex(const std::vector<std::vector<std::string>>& ca_counties,
                const std::string& match_county) {
  int index{-1};
  for (int i = 0; i < ca_counties[0].size(); i++){
    if (ca_counties[0][i] == match_county) {
      return i;
    }
  }
  return index;
}
