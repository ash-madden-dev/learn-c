/*
 * CHALLENGE: Declare a "car" struct with a name, a price, and a top speed.
 * Create a variable of that type and set each of its three fields one at a
 * time using the dot operator, then print them.
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
  // Create the struct
  struct car new_car;

  // Set fields individually using dot operator
  new_car.name = "Audi";
  printf("Name: %s\n", new_car.name);
  new_car.price = 15999.99;
  printf("Price: %.2f\n", new_car.price);
  new_car.top_speed = 400;
  printf("Top Speed: %d\n", new_car.top_speed);
}
