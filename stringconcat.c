#include <stdio.h>
#include <string.h>

// program that concatenates strings

int main()
{
    char s1[30] = "Chibuzo";
    char s2[30] = " Senami";
    strcat(s1, s2);
    printf("Strings afer concatenation: %s", s1);
}