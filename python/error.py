try:
    a=10
    b=0
    print(a/b)
except:
    print("Zero division error")
try:
    a=[1,2,3]
    print(a[5])
except:
    print("Index error")
try:
    a=int(input("enter a number"))
except:
    print("Value error")
try:
    a={1,2,3}
    print(a[5])
except:
    print("type error")
try:
    print(dfh)
except:
    print("Name error")