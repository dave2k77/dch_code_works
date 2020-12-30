import pytest
from math import cos, exp, pi, log, sin

def diff(f, x, h=1E-7):
	"""
	This function approximates the derivative of a function 
	f at some point x in the domain of f using the central difference method.
	"""
	diff_f = (f(x + h) - f(x - h)) / (2 * h)
	
	return diff_f


# ----- Unit Testing ----

def test_diff():
    assert pytest.approx(diff(lambda x: x, 2)) == 1
    assert pytest.approx(diff(lambda x: x**2, 2)) == 4
    assert pytest.approx(diff(lambda x: x**3, 1.5)) == 6.75
    assert pytest.approx(diff(lambda x: exp(x), 0)) == 1
    assert pytest.approx(diff(lambda x: sin(x), pi/4)) == cos(pi/4)
    assert pytest.approx(diff(lambda x: log(x), 2)) == 0.5

