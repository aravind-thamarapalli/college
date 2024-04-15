import numpy as np
arr1 = np.array([[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]])
print("trace of the matrix is",arr1.trace())
print("rank of the matrix is",np.linalg.matrix_rank(arr1))
print("determinant of matrix is",np.linalg.det(arr1))

