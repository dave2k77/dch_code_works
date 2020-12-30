# Heavy-side Function

def H(x):
    if x < 0:
        return 0
    else:
        return 1

# -------------- Unit Testing -----------------

x = 10
y = -5

def test_H():
    assert H(x) == 1
    assert H(y) == 0

