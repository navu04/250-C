#include <stdio.h>
int main()
{
  int n;
  float c, f;
  printf("Enter 1 for Celcius to Fehrenheit and \nEnter 2 for Fehrenheit to Celcius : ");
  scanf("%d",&n);

  if (n == 1)
  {
    printf("Enter Temperature : ");
    scanf("%f", &c);
    printf("Fehrenheit : %.2f", c * 9 / 5 + 32);
  }

  else if (n == 2)
  {
    printf("Enter Temperature : ");
    scanf("%f", &f);
    printf("Celcius : %.2f", (f - 32) * 5 / 9);
  }

  else
    printf("Enter 1 0r 2 only");

  return 0;
}
