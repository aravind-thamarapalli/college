#Write a program that demonstrates the row selection, row addition, and row deletion. 
import pandas as pd
import numpy as np
data = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
df = pd.DataFrame(data,index=['a','b','c','d'],columns=[1,2,3,4])
print(df)
#selection
print("row selection")
print(df.loc[df[1]==5])
#addition
print("row addition")
df.loc['e'] = [17,18,19,20] 
print(df)
#deletion
df.drop('d',inplace=True)
print(df)