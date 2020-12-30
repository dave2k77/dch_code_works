#include <stdio.h>

void swap1(int a, int b);
void swap2(int *ptrx, int *ptry);

int main(void) {
	int a, b;
	a = 10;
	b = 20;
	
	printf("Swapping values by referencing using pointers.\n");
	printf("a = %i and b = %i\n", a, b);
	
	int *i, *j;
	i = &a;
	j = &b;
	
	swap2(i, j);
	
	printf("a = %i and b = %i\n", a, b);
	
	
	printf("Swapping values by passing parameters.\n");
	
	printf("a = %i and b = %i\n", a, b);
	
	swap1(a, b);
	
	printf("a = %i and b = %i\n", a, b);
	
	return 0;
}
// swap by referencing.
void swap2(int *ptrx, int *ptry) {
    int temp;
    temp = *ptrx;
    *ptrx = *ptry;
    *ptry = temp;
}
// swap by parameters.
void swap1(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
