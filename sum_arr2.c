/*
This program uses pointers to sum the elements in an array by specifiying a pointer to the start
and end values of the array and using pointer arithmetic.
*/

#include <stdio.h>
#define SIZE 10

int sump(int *start, int *end);

int main(void) 
{
	int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
	long answer = sump(marbles, marbles + SIZE);

	printf("The total number of marbles is %ld. \n", answer);
	return 0;
}

int sump(int *start, int *end)
{
	int total = 0;
	while(start < end)
	{
		total += *start++;
	}
	
	return total;
}