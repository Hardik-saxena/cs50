#include <stdio.h>

int cal_quarters(int cents);
int cal_dimes(int cents);
int cal_nickels(int cents);
int cal_pennies(int cents);

int main()
{
    int cents;
    do
    {
        printf("owned cents: ");
        scanf("%d", &cents);
    }
    while(cents<0);
    int quarters = cal_quarters(cents);
    cents = cents - (quarters*25);

    int dimes = cal_dimes(cents);
    cents = cents - (dimes*10);

    int nickels = cal_nickels(cents);
    cents = cents - (nickels*5);

    int pennies = cal_pennies(cents);
    cents = cents - (pennies*1);

    int sum = quarters+dimes+nickels+pennies;

    printf("%i\n", sum);
}
int cal_quarters(int cents)
{
    int quarters = 0;
    while(cents>=25)
    {
        quarters++;
        cents = cents-25;
    }
    return quarters;
}

int cal_dimes(int cents)
{
    int dimes = 0;
    while(cents>=10)
    {
        dimes++;
        cents = cents-10;
    }
    return dimes;
}

int cal_nickels(int cents)
{
    int nickels = 0;
    while(cents>=5)
    {
        nickels++;
        cents = cents-5;
    }
    return nickels;
}

int cal_pennies(int cents)
{
    int pennies = 0;
    while(cents>=1)
    {
        pennies++;
        cents = cents-1;
    }
    return pennies;
}
