/*

Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000

*/
#include <stdio.h>

float average_consumption(int total_distance, float used_fuel) {
  return total_distance / used_fuel;
}

int main(void) {
  printf("Average consumption (km/lt) %.2f\n", average_consumption(350, 5));
}
