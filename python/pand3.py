import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Create a DataFrame
df = pd.DataFrame({
    'A': np.random.rand(10),
    'B': np.random.rand(10),
    'C': np.random.rand(10)
})

# Bar plot
df.plot(kind='bar')
plt.title('Bar plot')
plt.show()

# Histogram
df.plot(kind='hist', alpha=0.7)
plt.title('Histogram')
plt.show()

# Line plot
df.plot(kind='line')
plt.title('Line plot')
plt.show()

# Scatter plot
df.plot(kind='scatter', x='A', y='B')
plt.title('Scatter plot')
plt.show()
