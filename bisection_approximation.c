#include <stdio.h>
#include <math.h>

#define EPS 1E-5 // error tolerance level.

int main(void)
{
	double a = 0, b = M_PI, m, dt;
	dt = fabs (a - b); // fabs() function computes the absolute value of two rational numbers.
	int count = 0;

	if (cos(b) * cos(a) > 0)
		{
			printf("cos(x) = 0 has no roots in the interval [a, b]");
		}

	while (dt > EPS)
	{
		m = (a + b)  * 0.5;
		if (cos(b) * cos(m) < 0)
		{
			b = m;
		}
		else if (cos(b) * cos(m) > 0)
		{
			a = m;
		}
		else 
		{
			a = b = m;
		}
		count++;
		dt = fabs(a - b);
		printf("After %d iteration(s) the approximate value of the root is %0.7f\n", count, m);
		printf("The error of approximation is %0.7f \n", dt);
	}
	printf("The final approximation for cos(x) = 0 on the interval (0, M_PI) is %0.7f\n", m);

	return 0;
}