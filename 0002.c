#include <stdio.h>

int main(void) {
  char message[] = "We are using";
  if (__STDC_VERSION__ == 199901L) {
    printf("%s C99 standard\n", message);
  } else if (__STDC_VERSION__ == 201112L) {
    printf("%s C11 standard\n", message);
  } else if (__STDC_VERSION__ == 201710L) {
    printf("%s C17 / C18 standard\n", message);
  } else if (__STDC_VERSION__ == 202311L) {
    printf("%s C23 standard\n", message);
  } else {
    printf("Version not specified\n");
  }
}
