#include <stdio.h>

int main(void) 
{
   int scores[3];
   size_t size = sizeof(scores) / sizeof(scores[0]);

    for (int i = 0; i < size; i++)
    {
        printf("what is your score?: ");
        scanf("%i", &scores[i]);
        
    }

    printf("Average: %.2f\n", (scores[0]+scores[1]+scores[2])/ (float) 3);
    

}