#include <stdio.h>
int main()
{
  int p;
  float r, t, si;
  printf("Enter Principle Amount : ");
  scanf("%d", &p);
  printf("Enter Rate of Interest : ");
  scanf("%f", &r);
  printf("Enter Time duration in Years : ");
  scanf("%f", &t);

  si = p * r * t / 100;

  printf("Simple Interest : %.2f\nTotal Amount : %.2f",si,si+p);
  return 0;
}
