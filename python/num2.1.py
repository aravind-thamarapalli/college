import numpy as np
arr1 = np.array([[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]])
x,y = np.linalg.eig(arr1)
print("eigen values are",x)
print("eigen vectors are",y)
