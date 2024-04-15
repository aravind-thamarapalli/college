import pandas as pd
import numpy as np
arr= pd.DataFrame({'one':[1,2,3,4],'two':[11,22,33,44]})
arr2= pd.Series([1,2,3,4,5])
arr3=arr.to_numpy()
arr4=arr2.to_numpy()
print(arr3)
print(arr4)
