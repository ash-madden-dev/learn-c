/*
 * CHALLENGE: Declare a "car" struct with a name, a price, and a top speed.
 * Create a variable using designated initializers that set the top speed and
 * name out of struct order, leaving the price out so it defaults to zero.
 * Print all three fields.
 *
 * EXPECTED OUTPUT: The screen shows the car's name, its price (0.00), and its
 * top speed, each on its own line.
 */

#include <stdio.h>

struct car {
  char *name;
  float price;
  int top_speed;
};

int main(void) {
  struct car new_car = {.name = "Audi", .top_speed = 400};
  printf("%s, %.2f, %d\n", new_car.name, new_car.price, new_car.top_speed);
}
