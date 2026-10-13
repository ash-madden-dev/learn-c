/*
 * CHALLENGE: Make a "car" that groups a name, a price, and a top speed
 * together. Give it the name "Saturn SL/2", the price 15999.99, and the top
 * speed 175, then show all three on the screen.
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
  struct car new_car = {
      .name = "Saturn SL/2", .price = 15999.99, .top_speed = 175};
  printf("Car's name: %s\nPrice: %.2f\nTop Speed: %d\n", new_car.name,
         new_car.price, new_car.top_speed);
}
