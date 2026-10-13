#include <stdio.h>

void years_months_days(int days) {
  if (days <= 0) {
    printf("0 Days\n");
  } else {
    int years = days / 365;
    printf("%d Year(s)\n", years);
    int months = (days - (years * 365)) / 30;
    printf("%d Month(s)\n", months);
    int remaining_days = days - (years * 365) - (months * 30);
    printf("%d Day(s)\n", remaining_days);
  }
}

int main(void) {
  int days = 2535;
  years_months_days(days);
}
