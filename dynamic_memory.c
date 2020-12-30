#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char name[100];
    char* description;

    strcpy(name, "Zara Ali");

    description = malloc(30*sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error in allocating the required memory\n");
    }
    else
    {
        strcpy(description, "Zara Ali, a DPS student.");
    }

    description = realloc(description, 100*sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error allocating the required memory.\n");
    }
    else
    {
        strcat(description, " She is in class 10 and studies math.");
    }

    printf("Name: %s\n", name);
    printf("Description: %s\n", description);

    free(description);

    return 0;
}
