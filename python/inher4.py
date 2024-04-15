class person:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def display(self):
        print("name is :",self.name)
        print("age is :",self.age)
class student(person):
    def __init__(self,name,age,bloodgroup,rollno):
        self.bloodgroup=bloodgroup
        self.rollno=rollno
        super().__init__(name,age)
    def show(self):
        self.display()
        print("bloodgroup is :",self.bloodgroup)
        print("rollno is :",self.rollno)
obj=student("aravind",18,"o++",34)
obj.show()
