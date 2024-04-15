class A:
    def __init__(self):
        self.name='aravind'
        self.id=234
        self.age=18
    def meth1(self):
        print(self.name)
class B(A):
    def meth2(self):
        print(self.name,self.id)
class C(B):
    def meth3(self):
        print(self.name,self.age,self.id)
obj=C()
obj.meth1()
obj.meth2()
obj.meth3()                        