#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

  char key[] = "quack";

  for (int i = 0; i < strlen(key); i++) {
    if (key[i] >= 65 && key[i] <= 81) {
      key[i] -= 64;
    } else if (key[i] >= 97 && key[i] <= 123) {
      key[i] -= 96;
    }
  }
  printf("paste what you copied on the website here :) \n");

  int c;
  int i = 0;
  while ((c = getchar()) != EOF) {
    if (key[i] == 0) {
      i = 0;
    }
    char x = c;
    if (isalpha(x)) {
      if (islower(x)) {
        x -= tolower(key[i]) - 1;
        if (x < 'a') {
          x +=26;
        }
        i++;
      } else { 
        x -= toupper(key[i]) - 1;
        if (x < 'A') {
          x +=26;
        }
        i++;
      }
    }
    printf("%c", x);
  }

  return 0;
}
