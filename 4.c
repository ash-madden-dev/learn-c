#include <stdio.h>
#include <string.h>

typedef enum {
  SUCCESS = 0,
  ERROR = 1,
} Status;

Status reverse_string(char *string, char *reversedString) {
  if (string == NULL || string[0] == '\0') {
    return ERROR;
  } else {
    int start = 0;
    int end = strlen(string) - 1;
    while (0 <= end) {
      reversedString[start] = string[end];
      start++;
      end--;
    }
    reversedString[start] = '\0';
    return SUCCESS;
  }
}

int main(void) {
  char stringToReverse[] = "XML";
  char reversedString[strlen(stringToReverse) + 1];
  Status reverseStringStatus = reverse_string(stringToReverse, reversedString);

  if (reverseStringStatus != SUCCESS) {
    printf("ERROR: You must provide a valid string to reverse\n");
  } else {
    printf("%s\n", reversedString);
  }
}
