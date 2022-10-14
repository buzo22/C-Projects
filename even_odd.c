#include <stdio.h>

//Program that prints the number of even and odd numbers
//using arrays

int main ()
{
    int a[10], i;
    int even = 0, odd = 0;

    printf("Enter array elements: \n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total even numbers are: %d\n", even);
    printf("Total odd numbers are: %d", odd);
}