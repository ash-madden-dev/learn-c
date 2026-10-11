#include <stdio.h>

void hours_minutes_seconds(int amount_of_seconds) {
  int seconds_in_hour = 3600;
  int seconds_in_minute = 60;
  int number_of_hours = amount_of_seconds / seconds_in_hour;
  amount_of_seconds -= number_of_hours * seconds_in_hour;
  int number_of_minutes = amount_of_seconds / seconds_in_minute;
  amount_of_seconds -= number_of_minutes * seconds_in_minute;
  printf("There are\nH:M:S - %d:%d:%d\n", number_of_hours, number_of_minutes,
         amount_of_seconds);
}

int main(void) {
  int amount_of_seconds;
  printf("Enter an amount of seconds: \n");
  scanf("%d", &amount_of_seconds);
  hours_minutes_seconds(amount_of_seconds);
}
