#include <stdio.h>

int main()
{
    float bs, gs, da, hra;
    printf("Enter base salary : ");
    scanf("%f", &bs);                   // bs = base salary
    if (bs <= 5000)
    {
        hra = bs * 10 / 100;            //hra = house rent allowance
        da = bs * 90 / 100;             //da = dearness allowance
    }

    else
    {
        hra = 600;
        da = bs * 95 / 100;
    }

    gs = bs + da + hra;                 //gs = gross salary

    printf("Gross Salary is %.3f Rs", gs);

    return 0;
}
