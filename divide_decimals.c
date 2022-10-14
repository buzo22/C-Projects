#include <stdio.h>

// Program that divides decimals

int main(void)
{
    int c;
    double a;
    double b;

    printf("Enter the values; \n");
    scanf("%lf %lf", &a, &b);

    c = (int)(a/b);
    
    printf("%d", c);
    return(0);
}
