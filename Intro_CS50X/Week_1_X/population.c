// <cs50.h>

#include <stdio.h>


int main(void)
{
    // TODO: Prompt for start size
    int initial_size = 0;

    do
    {
        printf("Enter the initial population size: ");
        scanf("%i", &initial_size);  
        

    }
    while (initial_size < 9);
    printf("Initial population = %i",initial_size);
    printf(" \n");

    // TODO: Prompt for end size

    int final_size = 0;

    do
    {
        printf("Enter the final population size: ");
        scanf("%i", &final_size);  
    }
    while (final_size < initial_size);

    printf("Final population = %i",final_size);
    printf(" \n");

    // TODO: Calculate number of years until we reach threshold
    int gain = initial_size/3;
    int lose = initial_size/4;
    
    int pop_size = initial_size;
    int years = 0;


    do
    {
        pop_size = pop_size + gain - lose;
        gain = pop_size/3;
        lose = pop_size/4;
        years++;

    } while (pop_size < final_size);
    


    // TODO: Print number of years

    printf("Years : %i \n",years);
}