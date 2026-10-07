#include <math.h>
#include <stdio.h>

const double PI = M_PI;

float perimeter_of_circle(int radius) { return 2 * (PI * radius); }

float area_of_circle(int radius) { return PI * (radius * radius); }

int main(void) {
  printf("Perimeter of the Circle = %f inches\n", perimeter_of_circle(6));
  printf("Area of the Circle = %f inches\n", area_of_circle(6));
}
