import numpy as np
a=np.array([[1,2,3],[3,4,6],[4,7,8]])
b=np.array([[5,6,5],[7,8,7],[4,8,1]])
x=np.linalg.solve(a, b)
print(x)