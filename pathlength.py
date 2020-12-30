import pytest
from math import sqrt

def compute_delta(x):
	'''
	This function computes the pairwise 
	differences between values in a list. 
	For example:
	compute_delta([1,3,4,5,6,9]) = [1-3,  3-4,  4-5, 5-6, 6-9]
	'''
	dx = []
	for i in range(1, len(x)):
		dx_val = abs(x[i] - x[i-1])
		dx.append(dx_val)
	return dx	

def square_list(lst):
	"""
	This function takes a list of values as 
	argument and returns a list with the 
	square of each element in the list.
	For example:
	square_list([1,3,5,6,8]) = [1, 9, 25, 36, 64]
	"""
	sq_lst = []
	for val in lst:
		sq_val = val ** 2
		sq_lst.append(sq_val)
	return sq_lst

def  pathlength(x, y):
	'''
	This function takes a list of x-coordinates 
	and a list of y-coordinates in the plane, and 
	computes the length of the path connecting
	the points. It will call on the compute_delta()
	and the square_list() functions defined above
	to help in the calculation.
	'''
	dx = compute_delta(x)
	dy = compute_delta(y)
	dx2 = square_list(dx)
	dy2 = square_list(dy)
	L = 0
	for i in range(len(dx2)):
		sum_sq = dx2[i] + dy2[i]
		sqrt_sum = sqrt(sum_sq)
		L += sqrt_sum
	return L

# ---------------- Unit Testing -------------------------

x = [0, 2, 8, 11]
y = [0, 4, 3, 7]
true_val = sqrt(20) + sqrt(37) + 5

def test_compute_delta():
    assert compute_delta([1,3,4,5,6,9]) == [2,  1,  1, 1, 3]
    
def test_square_list():
    assert square_list([1,3,5,6,8]) == [1, 9, 25, 36, 64]

def test_pathlength():
	assert pathlength(x,y) == true_val
