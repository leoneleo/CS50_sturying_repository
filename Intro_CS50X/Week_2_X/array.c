#include <stdio.h>

float average(int array[], int size);

int main(void) 
{
    int size;
    printf("How many scores are there? ");
    scanf("%i", &size);
    int scores[size];

    float avg;
    avg = average(scores, size);
    printf (" Final score: %f\n", avg);

}




float average(int array[], int size)
{
    float avg=0;
    for (int i = 0; i < size; i++)
    {
        printf("what is your score?: ");
        scanf("%i", &array[i]);
        avg += array[i];
        
    }
    avg = avg/size;


    return avg;
}