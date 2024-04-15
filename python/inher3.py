class A:
    def __init__(self):
        self.name='aravind'
        self.id=234
    def meth1(self):
        print(self.name)
class B:
    def meth2(self):
        print(self.id)
class C(A,B):
    def meth(self):
        print(self.name,self.id)
obj=C()
obj.meth()
obj.meth1()
obj.meth2()
