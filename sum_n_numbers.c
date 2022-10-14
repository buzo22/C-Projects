#include <stdio.h>

// Program that performs addition of n numbers

int main ()
{
    int i, n, sum=0;

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of %d numbers = %d\n", n, sum);

    return 0;

}