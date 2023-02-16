#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{

    char *s;
    printf("s: ");
    scanf("%s", s);
    
    
    if (s==NULL)
    {
        return 1;
    }


    char *t = malloc(strlen(s)+1);
    if (t==NULL)
    {
        return 1;
    }
    


    for (int i = 0, n = strlen(s); i <= n ; i++)
    {
        t[i] = s[i];
    }
    
    if (strlen(t)>0)
    {
        t[0] = toupper(t[0]);
    }

    
    char *u = malloc(strlen(s)+1);
    if (u==NULL)
    {
        return 1;
    }


    strcpy(u,s);
    if (strlen(u)>0)
    {
        u[0] = toupper(u[0]);
    }
    


    printf("%s\n", s);
    printf("%s\n", t);
    printf("%s\n", u);

}