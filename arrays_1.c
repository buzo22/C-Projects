#include <stdio.h>
// index allocation explaining the use of arrays
int main()
{
    int a[10], i;
    printf("Enter the arrays elements: ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("array element at index %d is: %d\n", i, a[i]);
    }
    for (i = 9; i >= 0; i--)
    {
        printf("array element at index %d is %d\n", i, a[i]);
    }
}