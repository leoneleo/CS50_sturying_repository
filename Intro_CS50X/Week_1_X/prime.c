#include <stdio.h>
#include <stdbool.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        printf("Minimum: ");
        scanf("%i", &min);

    }
    while (min < 1);

    int max;
    do
    {
        printf("Maximum: ");
        scanf("%i", &max);
    } 
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // TODO
    bool p = true;

    if (number ==1)
    {
        return false;
    }
    if (number == 2)
    {
        return true;
    }
    

    int i = number-1;

    do
    {
        
        if (number%i==0)
        {
            p=false;
        }
        
        i--;
    } while (p==true && i > 1);
    

    return p;

}