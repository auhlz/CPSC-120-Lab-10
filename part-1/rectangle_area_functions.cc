// Alex Labitigan
// CPSC 120-12
// 2022-10-31
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 09-01
// Partners: @dianasuceli
//
// Rectangle functions
//

// Calculate the area of a triangle defined by length and width.
//
// The area of a triangle is the product of the length and width.
//
// Although rectangles with negative length and width exist, this program
// is meant to be used to calculate the positive area of rectangles one
// could encounter in the physical world.
//
// Because of this requirement, length and width must be positive
// integers. Values less than 1 mean that the rectangle has 0 area.
//
// Typical usage:
// \code
//   int input_length = 13;
//   int input_width = 17;
//   int area = RectangleArea(input_length, input_width);
// \endcode
//
// \param length the length of the rectangle
// \param width the width the rectangle
// \returns the area of the rectangle defined by length and width
  // TODO: Implement the function according to the specifications.

int RectangleArea(int length, int width) {
  int area{0};
  if  (length >= 0 && width > 0) {
    area = length * width;
  }
  return area;
}
