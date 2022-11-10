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

int main(int argc, char const* argv[]) {
  std::vector<std::string> args(argv, argv + argc);
  if (args.size() < 3 ) {
    std::cout << "Please provide two arguments, a rectangle's length and width.";
    return 1;
  }
  int length = 0;
  int width = 0;
  try{
    length = std::stoi(args.at(1));
    width = std::stoi(args.at(2));
  }catch(const std::exception ex){
    std::cout << "There was a problem reading the input numbers.\n";
    std::cout << ex.what();
    return 1;
  }

int area = RectangleArea(length,width);
std::cout << length << " x " << width << " = " << area << "\n";

  return 0;
}  
// TODO: convert the command line arguments to a std::vector of std::strings.
  // TODO: Check to make sure you have enough arguments. If you have too few,
  // print an error message and exit.
  // TODO: Convert the command line arguments from std::strings to integers
  // using std::stoi()
  // TODO: Calculate the area of the given rectangle using the function
  // RectangleAndgle that you defined and implemented in
  // rectangle_area_functions.cc.
  // TODO: Print the input length, input_width, and the area to the terminal.
  // TODO: Return zero if everything worked correctly.