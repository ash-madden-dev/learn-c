/*
 * CHALLENGE: Declare a "car" struct with a name, a price, and a top speed.
 * Write a function that takes a pointer to the struct and a new price, and
 * changes the struct's price. Call it from main and print the updated price
 * to prove the change reached the caller.
 *
 * EXPECTED OUTPUT: The screen shows the car's new price.
 */

#include <stdio.h>

struct car {
  char *name;
  float price;
  int top_speed;
};

void change_price(struct car *c, float new_price) { c->price = new_price; }

int main(void) {
  struct car new_car = {.name = "Audi", .price = 15999.99, .top_speed = 400};
  change_price(&new_car, 2000.00);
  printf("%.2f\n", new_car.price);
}
