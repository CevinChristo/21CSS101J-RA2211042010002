#include <stdio.h>

int main() {
  printf("RA2211042010002\n\n");
  int i;
  for (i = 0; i < 20; i++) {
    if (i == 5) {
      continue;
    }
    printf("%d\n", i);
  }   
  return 0;
}
