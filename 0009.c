#include <stdio.h>

int sum_of_two_integers(int a, int b) { return a + b; }

int main(void) {
  printf("Product of the above two integers = %d\n",
         sum_of_two_integers(25, 38));
}
