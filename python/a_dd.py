class A:
    def __init__(self,name):
        self.name=name
    def __add__(self,name1):
        return (self.name + name1.name)
obj=A('gvp')
obj1=A('cse')
print(obj + obj1)           