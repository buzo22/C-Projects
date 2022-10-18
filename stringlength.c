#include <stdio.h>
#include <string.h>

int main ()
{
    char name[30];
    int count = 0, i = 0;
    
    printf("Enter name: ");
    gets(name);
    count = strlen(name);
    puts(name);
    printf("Length of string: %d", count);
}