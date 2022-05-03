#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  for (int i = 1; i < argc; i++) {
    for (int j = 0; j < strlen(argv[i]); j++) {
      if ((argv[i][j] > 64 && argv[i][j] < 78) || (argv[i][j] > 96 && argv[i][j] < 110)) {
        argv[i][j] += 13;
      } else if ((argv[i][j] > 77 && argv[i][j] < 91) || (argv[i][j] > 109 && argv[i][j] < 123)) {
        argv[i][j] -= 13;
      }
    }
  }
  for (int x = 1; x < argc; x++) {
    printf("%s ", argv[x]);
  }
  return 0;
}
