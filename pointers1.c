#include <stdio.h>
// program on pointers

int main ()
{
    int a = 10, b = 9, c;
    int *p, *q;
    p = &a;
    q = &b;

    printf("value of a = %d\n", a);
    printf("value  of a = %d\n", *p);
    printf("address of a: %x\n", &a);
    printf("address of a: %x\n", p);
    printf("address of a: %x\n", &p);
    printf("c = %d\n", c);
    printf("value of b: %d\n", b);
    printf("address of b: %x\n", &b);
}