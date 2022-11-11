// Alex Labitigan
// CPSC 120-12
// 2022-10-31
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 10-01
// Partners: @dianasuceli
//
// Rectangle functions
//

int RectangleArea(int length, int width) {
  int area{0};
  if  (length >= 0 && width > 0) {
    area = length * width;
  }
  return area;
}
