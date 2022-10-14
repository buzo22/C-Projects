#include <stdio.h>

// Program that calculate the population of a city
// using this formula: 
// futurePopulation = currentPopulation * (1 + growth / 100)

int main(void) 
{
    int c, f;
    double g, fu;

    printf("Enter current and future pop values: \n");
    scanf("%d", &c);
    scanf("%lf", &g);

    fu = c * (1 + g / 100);
    f = (int) fu;

    printf("The required pop value is: %d", f);

    return(0);
}