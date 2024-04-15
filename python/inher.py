class A:
    def __init__(self):
        self.name="aravind"
        self.id=234
    def meth(self):
        print(self.name)
class B(A):
    def meth2(self):
        print(self.name,self.id)    
obj=B()
obj.meth()  
obj.meth2()          