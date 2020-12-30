#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

/* The isAlpha() function takes a character and returns true if the character is an alphabet element. */ 
bool isAlpha(const char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/* The countWord() function uses the isAlpha() function to check for the 
presence of a stream of characters and returns the number of streams found. */
int wordCount(const char string[])
{
    int i, wordcount=0;
    bool searchWord = true, isAlpha(const char c);

    for (i = 0; string[i] != '\0'; i++)
    {
        if (isAlpha(string[i]))
        {
            if (searchWord)
            {
                wordcount++;
                searchWord = false;
            }
        }
        else
        {
                searchWord = true;
        }    
    }
    return wordcount;
}

int main(int argc, char **argv)
{
    // const char text[] = "Davian Chin";
    printf("%s - number of words is: %i\n", argv[1], wordCount(argv[1]));
        
    return 0;
}