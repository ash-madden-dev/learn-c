#include <stdio.h>

void bank_notes(int amount) {
  if (amount <= 0) {
    printf("There are zero bank notes");
  } else {
    int notes = 0;
    printf("There are:\n");
    while (amount != 0) {
      if (amount >= 100) {
        // 100 and over
        notes = amount / 100;
        printf("%d Note(s) of 100\n", notes);
        amount -= notes * 100;
      } else if (amount >= 50 && amount < 100) {
        // 50-99
        notes = amount / 50;
        printf("%d Note(s) of 50\n", notes);
        amount -= notes * 50;
      } else if (amount >= 20 && amount < 50) {
        // 20-49
        notes = amount / 20;
        printf("%d Note(s) of 20\n", notes);
        amount -= notes * 20;
      } else if (amount >= 10 && amount < 20) {
        // 10-20
        notes = amount / 10;
        printf("%d Note(s) of 10\n", notes);
        amount -= notes * 10;
      } else if (amount >= 5 && amount < 10) {
        // 5-9
        notes = amount / 5;
        printf("%d Note(s) of 5\n", notes);
        amount -= notes * 5;
      } else if (amount >= 2 && amount < 5) {
        // 2-4
        notes = amount / 2;
        printf("%d Note(s) of 2\n", notes);
        amount -= notes * 2;
      } else {
        // 1
        notes = amount;
        printf("%d Note(s) of 1\n", notes);
        amount -= notes * 1;
      }
    }
  }
}

int main(void) {
  int amount = 375;
  bank_notes(amount);
}
