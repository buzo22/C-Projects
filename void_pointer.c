#include <stdio.h>

// void pointer

int main ()
{
    void *vp;

    int a = 10;
    float b = 20;
    char c = 't';

    vp = &a;
    printf("a = %d\n", *(int*)vp);

    vp = &b;
    printf("b = %.3f\n", *(float*)vp);

    vp = &c;
    printf("c = %c\n", *(char*)vp);
}