import pandas as pd
data=[1,2,3,4,5,6]
labels=['a','b','c','d','e','f']
ser=pd.Series(data,index=labels)
print(ser)