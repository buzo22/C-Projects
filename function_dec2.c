#include <stdio.h>

void sum();
void sub();


void main()
{
    sum();
    sub();
}

void sum ()
{
    int a, b, sum;
    printf("Enter numbers: \n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
}
void sub ()
{
    int a, b sub;
    printf("Enter numbers: \n");
    scanf("%d %d", &a, &b);
    sub = a - b;
    printf("Sub = %d\n", sub);
}