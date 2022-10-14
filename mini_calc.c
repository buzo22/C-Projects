#include <stdio.h>

// Program to perform addittion, subtraction, multiplication
// and division.

int main()
{
    int num1, num2, calc;

    printf("Enter numbers: \n");
    scanf("%d%d", &num1, &num2);

    calc = num1 + num2;
    printf("Addition = %d\n", calc);

    calc = num1 - num2;
    printf("Subtraction = %d\n", calc);

    calc = num1 * num2;
    printf("Multiplication = %d\n", calc);

    calc = num1 / num2;
    printf("Division = %d\n", calc);

    return 0;

}