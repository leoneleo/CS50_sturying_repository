#include <stdlib.h>
#include <stdio.h>


typedef struct node
{
    int number;
    struct node *next;
}
node;

int main (int argc, char *argv[])
{

    // memory for numbers
    node *list = NULL;


    // iterate over the arguments that where typed
    for (int i = 1; i < argc; i++)  // it starts in 1 because the first argument is the name of the code
    {
        int number = atoi(argv[i]);  // the value is a char as std

        // we must first allocate a place for the number
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }

        n ->number = number;
        n ->next =NULL;

        // if the list we created has not yet been used and it is empty
        if (list == NULL)
        {
            list = n; //puts the reference n here
        }

        // if the number belongs in the beginning of the list
        else if(n->number < list->number)
        {
            n->next = list; // puts the old reference here
            list = n; // update the list for the new reference
        }
        
        // if the number belongs later in list
        else if (n->number >= list->number)
        {
            // we must iterate over the numbers in the list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                //in the end
                if (ptr->next == NULL)
                {
                    // we must append in the end 
                    ptr->next = n;
                    break;
                }

                // if the number in the middle of the list
                else if (n->number < ptr->next->number)
                {
                    n->next=ptr->next;
                    ptr->next=n;
                }   
            }   
        }
    }
    // printing the list
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {

        printf("%i\n", ptr->number);
    }
    
    // in the end we must free the memory we used and allocated
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next= ptr->next;
        free(ptr);
        ptr = next;
    }
    
}