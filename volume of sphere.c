#include <stdio.h>

int main()
{
  printf("RA2211042010002\n\n");
  float radius, volume;
  printf("Radius: ");
  scanf("%f", &radius);
  
  volume = (4/3)*3.14*radius*radius*radius;
  printf("%f", volume);
}
