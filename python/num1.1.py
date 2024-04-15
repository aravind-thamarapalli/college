import numpy as np
arr=np.array([1,2,3,4,5,6,7,8,9])
print("original array")
print(arr)
print("array after slicing")
print(arr[1:6])
arr1=np.array([1,2,3])#integer array indexing
print("printing an array using integer array indexing")
print(arr[arr1])
arr2= arr>5#boolean array indexing
print("printing an array using boolean array indexing")
print(arr[arr2])