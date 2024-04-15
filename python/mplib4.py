import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
data = {'a':[1,12,3,14,5],'b':[15,6,7,18,9],'c':[12,5,16,7,15]}
df = pd.DataFrame(data)
df.plot(kind='scatter', x='a', y='b')
plt.title('Scatter plot')
plt.show()