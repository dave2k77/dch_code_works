import pytest

def area_triangle(vertices):
	'''
	This function will accept a list of tuples or lists 
	(as the coordinates for the vertices of the triangle)
	and compute the area of the triangle formed by the coordinates.
	'''
	v1 = vertices[0]
	v2 = vertices[1]
	v3 = vertices[2]
	x1 = v1[0]
	x2 = v2[0]
	x3 = v3[0] 
	y1 = v1[1]
	y2 = v2[1]
	y3 = v3[1] 

	# compute the area of the triangle.
	return 1/2 * abs((x2 * y3 ) + (x3 * y1) + (x1 * y2) - (x3 * y2) - (x1 * y3) - (x2 * y1))

# ------ Unit Testing --------

test_vertices_1 = [[1,2], [5,-1], [9,0]]
test_vertices_2 = [(1,2), (5,-1), (9,0)]

def test_area_triangle():
    assert area_triangle(test_vertices_1) == 8
    assert area_triangle(test_vertices_2) == 8
