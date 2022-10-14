#include <stdio.h>
// calculate the sum and average of a given number of students
int main()
{
    int i;
    float marks[10];
    float sum = 0.0, avg;

    printf("Enter the marks of the students: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &marks[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / 10;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);
}