import pandas as pd
df = pd.DataFrame({'a':[1,2,3,4],'b':[5,6,7,8]})
# Assuming 'df' is your DataFrame
grouped = df.groupby('b')

# Now 'grouped' is a GroupBy object. You can apply aggregate functions to it.
mean_df = grouped.mean()
print(mean_df)