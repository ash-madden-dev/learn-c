#include <stdio.h>

void years_weeks_days(int total_days) {
  if (total_days < 7) {
    printf("Years: 0\nWeeks: 0\nDays: %d", total_days);
  } else {
    int years = total_days / 365;
    int weeks = (total_days - (years * 365)) / 7;
    int days = total_days - ((years * 365) + (weeks * 7));
    printf("Years: %d\nWeeks: %d\nDays: %d\n", years, weeks, days);
  }
}

int main(void) { years_weeks_days(1329); }
