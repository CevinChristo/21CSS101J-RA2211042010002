#include<stdio.h>
int main()
{
  float miles , kilometers;
  printf("enter distance in miles=69");
  scanf("%f" ,&miles);
  kilometers = miles * 1.609;
  printf("%.2f Miles are equal to %.2f kilometer" , miles ,kilometers);
        return 0;
}