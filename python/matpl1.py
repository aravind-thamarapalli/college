import matplotlib.pyplot as plt
import pandas as pd

df = pd.DataFrame({'a':[9,8,7],'b':['yash','remo','sumo']})
df.plot(x="b",y="a",kind="bar")