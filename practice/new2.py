class MyException(Exception):
    "Exception raised"
    pass
ception = True
try:
    if ception == True:
        raise MyException("hell")
    else:
        print("no exception")
except MyException as e:
    print(e)