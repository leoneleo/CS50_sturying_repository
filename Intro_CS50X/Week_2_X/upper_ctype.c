#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (void)
{
    char name[50];
    printf("What is your name? ");
    scanf("%s", name);
    printf("Your name in uppercase is: ");
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        printf("%c", toupper(name[i]));
    }
    printf("\n");
    

}