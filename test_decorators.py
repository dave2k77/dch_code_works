#!/usr/bin/bash

import pytest

def fixer_func(func):
	
	from functools import wraps
	
	@wraps(func)
	def wrapper(x, y):
	
		print(f"Fixing the function {func.__name__} ...")
		
		try:
			return func(x, y)
		except ZeroDivisionError:
			return "The denominator cannot be equal to zero."
	
	return wrapper
	
@fixer_func
def norm_divide(x, y):

	"""
	This function takes two numbers x and y and find the value of x 
	divided by y.
	
	Positional arguments:
	
	x    -- real number value 
	
	y    -- non-
	
	"""

	return x / y
	
print(norm_divide(8,4))
	
def test_divide_function():
	assert norm_divide(8, 4) == 2

def test_divide_function2():
	with pytest.raises(ZeroDivisionError):
		assert norm_divide(4, 0)
