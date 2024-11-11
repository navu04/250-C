#include<stdio.h>
int main()
{
  char f[20],m[20],l[20];
  printf("Enter your name : ");
  scanf("%s%s%s",&f,&m,&l);
  printf("Abbreviated name: %c.%c. %s",f[0],m[0],l);
  return 0;
}
