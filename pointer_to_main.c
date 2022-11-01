#include <stdio.h>

int* return_pointer (int []);

int main ()
{
    int a [] = {1, 2, 3, 4, 5}, *p;

    p = return_pointer(a);

    printf ("%d\n", *p);
}

int* return_pointer (int a[])
{
    a = a + 2;
    return a;
}