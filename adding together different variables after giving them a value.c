#include <stdio.h>

int main() {
  int sum1 = 10 + 500;        
  int sum2 = sum1 + 250;     
  int sum3 = sum2 + sum2;     
  printf("%d\n", sum2);
  printf("%d\n", sum3);
  return 0;
}
