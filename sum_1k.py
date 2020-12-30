import pytest
def sum_1k(M):
    '''
    Write a function sum_1k(M) to compute 
    the sum of 1/k for k in the range 1 to M (inclusive).
    '''
    sum = 0

    for k in range(1, M+1):
        sum += 1/k

    return sum 

# ------------- Unit Testing --------------

M = 3
def test_sum_1k():
    assert sum_1k(M) == 11/6