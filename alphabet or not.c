#include <stdio.h>
void main () {
  char d;
  printf("Enter any character : ");
  scanf("%c",&d);
  if ((d>= 'a' && d <= 'z') || (d >='A' && d <='Z')) {
    printf("Given character %c is a n alphabet\n",d);
    else {
      printf("Given character %c is not an alphabet\n",d);
    }
  }