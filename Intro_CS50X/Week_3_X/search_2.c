#include <stdio.h>
#include <string.h>

int main(void)
{
    char words[] = {"battleship","house", "iron"};
    char n[];
    printf("String: ");
    scanf("%s", &n);
    
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(words[i],n)==0)
        {
            printf("Found \n");
            return 0;
        }
        

    }
    printf("Nor found \n");
    return 1;
    

}