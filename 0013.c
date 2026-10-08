#include <stdio.h>

int find_maximum(int a, int b, int c) {
  if (a > b && a > c) {
    return a;
  } else if (b > a && b > c) {
    return b;
  } else {
    return c;
  }
}

int main(void) {
  printf("Maximum value of three integers: %d\n", find_maximum(25, 35, 15));
}
