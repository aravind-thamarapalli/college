import random
import pandas as pd
import numpy as np
sd=[1,2,3,4,5,6]
print(random.choice(sd))

a=int(input("guess a number from 1 to 3"))
b=random.randint(1, 3)
if(a==b):
    print("you guessed right")
else:
    print("you missed it")
    print(b)

df = pd.DataFrame(np.random.randn(5, 3),index=["a", "c", "e", "f", "h"],columns=["one", "two", "three"])
print(df)