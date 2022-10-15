#include <stdio.h>

// program for transpose of a matrix

int main ()
{
    int a[3][4], i, j;
    printf("Enter elements of Matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}