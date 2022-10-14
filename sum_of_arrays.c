#include <stdio.h>

// Program that calculates the  sum of arrays

int main()
{
    int a[10], b[10], sum[10], i;

    printf("Enter the first array elements: \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the second array elements: \n");
    
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        sum[i] = a[i] + b[i];
        printf("The total of first and second arrays = %d\n", i, sum[i]);
    }
}