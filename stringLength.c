#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int counter = 0;
    while (argv[1][counter] != '\0'){
        counter++;
    }
    printf("The length of your name is %d characters.\n", counter);

  }

