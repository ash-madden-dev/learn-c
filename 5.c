#include <stdio.h>

int perimeter_of_rectangle(int height, int width) {
  return (2 * height) + (2 * width);
}

int area_of_rectangle(int height, int width) { return height * width; }

int main(void) {
  printf("Perimeter of the rectangle = %d inches\n",
         perimeter_of_rectangle(7, 5));
  printf("Area of the rectangle = %d square inches\n", area_of_rectangle(5, 7));
}
