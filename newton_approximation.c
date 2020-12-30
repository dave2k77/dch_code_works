#include<stdio.h>
#include<math.h>

#define EPS 1E-5 // error tolerance level.

int main(void)
{
	double a = 0.5, b, dt;
	dt = fabs (a - b); // fabs() function computes the absolute value of two rational numbers.
	int count = 0;

	while (dt > EPS)
	{
		b = a + cos(a)/sin(a);
		count++;
		dt = fabs(a - b);
		printf("After %d iteration(s) the approximate value of the root is %0.7f\n", count, b);
		printf("The error of approximation is %0.7f \n", dt);
		a = b;
	}
	printf("The final approximation for cos(x) = 0 is %0.7f\n", b);

	return 0;
}
