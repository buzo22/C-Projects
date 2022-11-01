#include <stdio.h>

void modify(char[], char[]);

void main ()
{
    char str1[] = "Chibuzo";
    char str2[] = "akana";
    modify (str1, str2);
}

void modify (char str1[], char str2[])
{
    int i, l = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        l = l + 1;
    }
    str2 [1] = 'z';
    printf("length of string 1 is: %d\n", l);
    printf("both strings are: %s %s", str1, str2);
}