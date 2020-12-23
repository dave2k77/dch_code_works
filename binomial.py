#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 15 21:40:39 2020

@author: davianc
"""

import pytest

def cfactorial(n):
    '''
    Computes the factorial of positive integer n.
    
    Positional argument(s):
    
            n         -- positive integer
    
    Output value(s):
    
            retval    -- positive integer
    '''
    if n < 0:
        raise ValueError("n must be a positive integer!")
    if n == 0:
        retval = 1
        return retval
    else:
        retval = n*cfactorial(n-1)
        return retval
        

def bin_coef(n, r):
    """
    Computes the binomial coefficient nCr given positive integer n and 
    non-negative integer r.
    
    Positional argument(s):
    
        n        -- positive integer
        
        r        -- non-negative integer
    
    Output:
    
        coef     -- positive integer 
    """
    
    if n <= 0:
        raise ValueError("n must be a positive integer!")
    
    if r < 0:
        raise ValueError("r must be a non-negative integer!")
    
    coef = cfactorial(n) / (cfactorial(r) * cfactorial(n - r))
    
    return int(coef)


# ------------ Unit Testing ----------------------------------------------

def test_cfactorial():
	assert cfactorial(0) == 1
	assert cfactorial(4) == 24
	assert cfactorial(6) == 720
	
	with pytest.raises(ValueError):
		assert cfactorial(-2)
		
def test_bin_coef():
	assert bin_coef(4, 2) == 6
	assert bin_coef(6, 2) == 15
	assert bin_coef(5, 0) == bin_coef(5,5) == 1
	assert bin_coef(5, 1) == bin_coef(5, 4)
	
	with pytest.raises(ValueError):
		assert bin_coef(-4, 1)
		assert bin_coef(0, 0)
		assert bin_coef(4, 5)
		assert bin_coef(5, -2)
