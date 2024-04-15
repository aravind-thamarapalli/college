#Get n-largest and n-smallest values from a particular column in Pandas dataFrame 
import pandas as pd

df = pd.DataFrame({'A': [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 'B': [11, 12, 13, 14, 15, 16, 17, 18, 19, 20]})
n = 3
print(df['A'].nlargest(n))
print(df['B'].nsmallest(n))
