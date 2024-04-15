import pandas as pd
data = [[1,2,3,4],[5,6,7,8]]
labels = ['one','two']
df = pd.DataFrame(data,index=labels)
print(df)