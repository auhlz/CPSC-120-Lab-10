// Alex Labitigan
// CPSC 120-12
// 2022-10-31
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 10-03
// Partners: @dianasuceli
//
// Creates an image
//

#include <Magick++.h>

#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "gradient_functions.h"

// Please do not change the size of the image. This will break
// the automated tests.
const int kImageWidth{512};
const int kImageHeight{512};

int main(int argc, char* argv[]) {
  // Initialize the GraphicsMagick library. It must be the first thing
  // that happens in the main function.
  // Do not change or remove the line below.
  Magick::InitializeMagick(*argv);
std::vector<std::string> arguments(argv, argv + argc);
  if (arguments.size() < 2) {
    std::cout << "Please provide a path to a file.\n";
    return 1;
  }
std::string output_file_name;

output_file_name = arguments.at(1);

std::string image_format{"png"};

if (!HasMatchingFileExtension(output_file_name, image_format)) {
  std::cout << output_file_name << "is missing the required file extension .png.\n";
}
Magick::ColorRGB white(1, 1, 1);
Magick::Image image(Magick::Geometry(kImageWidth, kImageHeight), white);


for(int column = image.columns() -1; column >= 0; column--) {
  for (int row = 0; row < image.rows(); row++){
    double red = image.columns() - 1;
    double green = image.rows() - 1;
    double blue(0.25);
    Magick::ColorRGB color{red, green, blue};
    image.pixelColor(row, column, color);
  }
}
image.write(output_file_name);


  return 0;
}
  // TODO: convert the command line arguments to a
  // std::vector of std::strings.
  // TODO: Check to make sure you have enough arguments. If you have
  // too few, print an error message and exit.
  // TODO: Declare a std::string variable named output_file_name.
  // TODO: Assign the first argument to output_file_name
  // TODO: Declare a std::string variable named image_format and
  // initialize it to ".png"
  // TODO: Using HasMatchingFileExtension(), check to see if
  // output_file_name has the extension defined as image_format. If
  // output_file_name does not, then print an error message and return 1.
  // TODO: Declare a Magick::ColorRGB variable named white and set it's
  // color to white which means setting each color channel to 1.
  // For example:
  // Magick::ColorRGB white(1, 1, 1);
  // TODO: Declare a Magick::Image variable named image. Initialize the
  // variable to be kImageWidth pixels wide and kImageHeight pixels tall
  // and set the entire image to white. For example:
  // Magick::Image image(Magick::Geometry(kImageWidth, kImageHeight), white);

  // TODO: Define two for loops that are nested.
  // The outer loop counts through the columns starting from the
  // last column and counts down to the first column. Let's call the
  // counter for the outer loop 'column'. We would initialize 'column'
  // to (image.columns() - 1) and we would subtract one (column--) for
  // each iteration of the loop until 'column' reaches the first
  // column (column >= 0).
  // The inner loop counts through the rows starting from the first row
  // and counts up to the last row. Let's call the counter for the inner
  // loop 'row'. We would initialize 'row' to 0 and we would add
  // one (row++) for each iteration of the loop until 'row' reaches the
  // last row (row < image.rows()).
  // TODO: In the body of the loop, calculate the new color for the
  // pixel located at ('row', 'column'). To calculate the color for the
  // pixel we will declare three doubles red, green, and blue and
  // calculate the color using the current row or column.
  // For red, declare a double type variable with the name red.
  // Assign to red the ratio between the current 'row' and how many
  // columns the image has (image.columns() - 1).
  // For green, declare a double type variable with the name green.
  // Assign to green the ratio between the current 'column' and
  // how many rows the image has (image.rows() - 1).
  // For blue, declare a double type variable with the name blue.
  // Assign to blue the value 0.25.
  // TODO: Declare a Magick:ColorRGB type variable named color. This
  // will be the new color for the current pixel. Initialize color
  // with the red, green, and blue value that was just calculated.
  // For example:
  // Magick::ColorRGB color{red, green, blue};
  // TODO: Set the current pixel color in the image to the new color.
  // For example:
  // image.pixelColor(row, column, color);
  // This is the last step in the loop.

  // TODO: After the loop completes, write the image variable to a file.
  // Use the write() member function and name the output file
  // as output_file_name.
  // For example:
  // image.write(output_file_name);
