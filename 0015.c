#include <math.h>
#include <stdio.h>

double distance_between_points(int x1, int x2, int y1, int y2) {
  return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(void) {
  int x1 = 25, x2 = 35;
  int y1 = 15, y2 = 10;
  printf("Distance between the said points: %.4f\n",
         distance_between_points(x1, x2, y1, y2));
}
