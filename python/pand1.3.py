import pandas as pd
ser = pd.DataFrame({'one':[1,2,3,4],'two':[2,3,4,5],'three':[3,4,5,6]})

des = ser.describe()
print(des)

he = ser.head(3)
print(he)

ta = ser.tail(2)
print(ta)