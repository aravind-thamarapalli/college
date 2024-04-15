num = int(input("enter a whole number"))
try:
    if num <0:
        raise ValueError("number need to be whole number")
except ValueError as e:
    print(e)