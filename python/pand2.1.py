import pandas as pd
df = pd.DataFrame({'one':[1,2,3,4],'two':[5,6,7,8]})
print(df)
print(df['one'])

df['three']=pd.Series([9,10,11,12])
print(df)

del df['two']
print(df)