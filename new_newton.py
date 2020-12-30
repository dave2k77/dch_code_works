# Newton's approximation algorithm
from math import pi, sin

def derivative (func, t, dt):
	return (func(t + dt) - func(t)) / dt

def newton_alg (start, TOL, N):
	index = 1
	f = lambda x: x - 0.8 - 0.2*sin(x)
	
	while (index <= N):
		index += 1
		p = start - (f(start) / derivative (f, start, dt = 10E-7))

		if abs(p - start) < TOL:
			return f"The approximate root of the equation is {p} after {index} iterations and with error {abs(p - start)}."
		
		start = p

	return f"Method failed after {N} iterations."

print(newton_alg(pi/4, 10E-4, 50))