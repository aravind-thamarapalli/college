import pandas as pd
import numpy as np
df = pd.DataFrame(np.random.randn(5, 3),index=["a", "c", "e", "f", "h"],columns=["one", "two", "three"])
print(df)
df2 = df.reindex(index=["a","b","c","d","e","f","g","h"])
print(df2)
print(pd.isna(df2))
print(df2.notna())