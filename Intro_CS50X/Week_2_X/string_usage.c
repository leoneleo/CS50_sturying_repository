#include <stdio.h>
#include <string.h>

int main (void)
{
    char name[50];
    printf("What is your name? ");
    scanf("%s", name);
    
    /*
    I'm transforming upper to lowercase without the library
    So it could be made simply using toupper(name[i])... 
    */
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i]>='A' && name[i]<='Z') /*Check if it is uppercase and transform to lower*/
        {
            name[i]+=32;
        }
    }
    printf("Your name in lowercase is %s\n", name);


    for (int i = 0; i < strlen(name); i++)
    {
        
        if (name[i]>='a' && name[i]<='z') /*Check if it is lowercase and transform to upper*/
        {
            name[i]-=32;
        }
        
    }
    printf("Your name in uppercase is %s\n", name);
    



}