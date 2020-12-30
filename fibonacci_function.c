/* Fibonacci Function*/

#include<stdio.h>

long fib(long n);

int main(void){
	long m = fib(6);
	printf("Fib (5) = %ld\n", m);
	return 0;
}

long fib(long n)
{
	if (n < 2)
	{
		return n;
	} 
	else 
	{
		return fib(n-1) + fib(n-2);
	}
}