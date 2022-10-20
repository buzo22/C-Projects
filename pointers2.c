#include <stdio.h>

// Understanding pointers, more

int main ()
{
    int a = 1025;
    int *p;
    p = &a;

    printf("Size of integer is %lu bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);
    printf("Address = %d, value = %d\n", p+1, *p+1);

    char *p0;
    printf("Size of integer is %lu bytes\n", sizeof(char));
    //printf("Address = %d, value = %d\n", p0, *p0);
    //printf("Address = %d, value = %d\n", p0+1, *(p0+1));

}