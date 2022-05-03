#include <stdio.h>
#include <stdlib.h>

#define POEM_SIZE 413

int main() {
  char* poem = malloc(sizeof(char));
  int x = 1;
  printf("paste what you copied on the website :) ");
  for (int i = 0; i < POEM_SIZE; i++) {
    scanf("%2x", &x);
    poem[i] = (char)x;
    if (x == 0) {
      break;
    }
  }
  printf("\n%s\n", poem);
  free(poem);
  return 0;
}
