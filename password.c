#include <stdio.h>
#include <string.h>
void granted();
int main()
{
    char password[20];
    printf("Enter password:");
    gets(password);
    if (strcmp(password, "Password2"))
    {
        printf("\n invalid password");
    }
    else
    {
        granted();
    }
}
void granted()
{
    printf("Access granted");
}