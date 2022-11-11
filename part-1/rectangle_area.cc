// Alex Labitigan
// CPSC 120-12
// 2022-10-31
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 10-01
// Partners: @dianasuceli
//
// Rectangle area
//

#include <iostream>
#include <string>
#include <vector>

#include "rectangle_area_functions.h"

int main(int argc, char const *argv[]) {
  std::vector<std::string> args(argv, argv + argc);
  if (args.size() < 3) {
    std::cout
        << "Please provide two arguments, a rectangle's length and width.";
    return 1;
  }
  int length = 0;
  int width = 0;
  try {
    length = std::stoi(args.at(1));
    width = std::stoi(args.at(2));
  } catch (const std::exception &ex) {
    std::cout << "There was a problem reading the input numbers.\n";
    std::cout << ex.what();
    return 1;
  }

  int area = RectangleArea(length, width);
  std::cout << length << " x " << width << " = " << area << "\n";

  return 0;
}