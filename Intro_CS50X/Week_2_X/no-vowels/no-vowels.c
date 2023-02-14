// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


string replace (string word);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./no-vowels word \n");
        return 0;

    }
    string word = replace(tolower(argv[1]));
    printf("%s\n", word);



}


string replace (string word)
{
    for (int i = 0; i<strlen(word); i++)
    {
        if (word[i] == 'a')
        {
            word[i] = '6';
        }

        if (word[i] == 'e')
        {
            word[i] = '3';
        }

        if (word[i] == 'i')
        {
            word[i] = '1';
        }

        if (word[i] == 'o')
        {
            word[i] = '0';
        }

    }
    return word;
}