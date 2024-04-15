import pandas as pd

df1 = pd.DataFrame({'A': ['A0', 'A1', 'A2', 'A3'],'B': ['B0', 'B1', 'B2', 'B3'],'key': ['K0', 'K1', 'K0', 'K1']})

df2 = pd.DataFrame({'C': ['C0', 'C1', 'C2', 'C3'],'D': ['D0', 'D1', 'D2', 'D3'],'key': ['K0', 'K1', 'K0', 'K1']})

result = pd.concat([df1, df2], axis=1)
print("Concatenated dataframe:\n", result)

result = pd.merge(df1, df2, on='key')
print("Merged dataframe:\n", result)

result = df1.join(df2, lsuffix='_df1', rsuffix='_df2')
print("Joined dataframe:\n", result)
