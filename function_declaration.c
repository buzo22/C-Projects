#include <stdio.h>

// Functions

void sum ();
int main ()
{
    sum();
}
void sum ()
{
    int a, b, sum = 0;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("sum = %d", sum);
}