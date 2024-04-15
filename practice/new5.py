class father:
    Fname = ""
    def fName(self):
        print("Father name is"+ self.Fname)
class mother:
    Mname = ""
    def mName(self):
        print("Mother name is"+ self.Mname)
class son(father, mother):
    def details(self):
        print("father are "+ self.Fname)
        print("Mother are "+ self.Mname)
obj = son()
obj.fName()
obj.mName()
obj.Fname = "Joe"
obj.Mname = "Mary"
obj.details()