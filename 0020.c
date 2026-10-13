/*
 * CHALLENGE: Make a "car" that groups a name, a price, and a top speed
 * together. Give it all three values in a single line at the moment you
 * create it, then show them on the screen.
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
  struct car new_car = {.name = "Ferrari", .price = 70000.00, .top_speed = 400};
  printf("%s\n%.2f\n%d\n", new_car.name, new_car.price, new_car.top_speed);
}
