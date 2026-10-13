/*
 * CHALLENGE: Declare a "car" struct with a name, a price, and a top speed.
 * Create a variable and initialize all three fields in a single initializer
 * using the order the fields appear in the struct, then print them.
 *
 * EXPECTED OUTPUT: The screen shows the car's name, its price, and its top
 * speed, each on its own line.
 */

#include <stdio.h>

struct car {
  char *name;
  float price;
  int top_speed;
};

int main(void) {
  struct car new_car = {"Audi", 15999.99, 400};
  printf("Name: %s\nPrice: %.2f\nTop Speed: %d\n", new_car.name, new_car.price,
         new_car.top_speed);
}
