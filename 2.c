#include<stdio.h>
int main()
{
  float r,pi=3.14159;
  printf("Enter Radius : ");
  scanf("%f",&r);
  printf("The Area of Circle is: %.2f\nThe Circumference of Circle is : %.2f",pi*r*r,2*pi*r);
  return 0;
}
