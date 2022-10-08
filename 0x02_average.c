#include <stdio.h>

// a program that calculates the average of students grades 
// and approximates to 2 decimal places.

int main(void) 
{
    int num, 
    int grade,
    int i;
    int sum = 0;
    double doubSum;
    
    scanf("%d", &num);
    
    for(i=0 ; i < num ; i++)
    {
        scanf("%d", &grade);
        sum = sum + grade;
    }
    
    doubSum = (double) sum;
    printf("%.2lf", doubSum/num);
    return(0);
}
