/*
 * CHALLENGE: Declare a "car" struct with a name, a price, and a top speed.
 * Write a function that builds and returns a "car" struct. Call it from main,
 * copy the returned struct into a variable, and print its fields.
 *
 * EXPECTED OUTPUT: The screen shows the car's name, its price, and its top
 * speed, each on its own line.
 */

#include <stdio.h>
#include <time.h>

struct car {
  char *name;
  float price;
  int top_speed;
};

struct car create_car(char *name, float price, int top_speed) {
  struct car new_car = {.name = name, price = price, top_speed = top_speed};
  return new_car;
};

int main(void) {
  struct car new_car;
  new_car = create_car("Audi", 15999.99, 400);
  printf("%s, %.2f, %d\n", new_car.name, new_car.price, new_car.top_speed);
}
