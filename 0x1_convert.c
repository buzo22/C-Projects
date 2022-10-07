#include <stdio.h>

//C program to convert celcuis to fahrenhait

int main()
{
    double b;

    printf("Enter temperature in celcuis:\n");
    scanf("%lf", &b);
    
    printf("%.1lf", b*(9.0 / 5.0) + 32.0);
    return(0);
}
