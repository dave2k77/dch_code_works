import pytest

from math import log
def bisection(func, intval, n, eps=1E-2):
        '''
        The bisection algorithm is used for approximating the root of a 
        function given some guess in a reference interval. It works 
        based on the intermediate value theorem for continuous 
        functions on a given interval.

        Consider an equation f(x) = 0.  The intermediate value theorem 
        guarantees the existence of a root x* in the interval [a, b] if 
        f(a) * f(b) < 0.

        By continuously applying the theorem to increasingly smaller 
        neighbourhoods of the root x* we can eventual obtain a guess
        x^ of x* such that | f(x*) - f(x^) | < eps where 'eps' is some pre-
        determined level of acceptable error.
        '''
        a = intval[0]
        b = intval[1]

        if func(a) * func(b) > 0:
                print("error: no root exist on the interval.") 

        iteration = 0 
        while abs(func(a) - func(b)) > eps and (iteration < n):
                iteration += 1
                m = (a + b) / 2  # finding the mid-point of the interval.
                if (func(a) * func(m) <= 0):  # check that the root is located  to the left of m.
                        b = m
                else:  # otherwise, the root is to the right of m.
                        a = m
               #  print("{} \t {}".format(iteration, m))
               
        #return m
        return "After {0} iterations, the approximate root is {1}".format(iteration, m)

print(bisection(lambda x: log(x)-1, [2, 3], 50))

# -------- Unit Testing -------

def test_bisection():
	assert bisection(lambda x: log(x)-1, [2, 3], 50) == 'After 6 iterations, the approximate root is 2.703125'
