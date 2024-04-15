class person:
    def __init__(self):
        self.name=str(input('enter your name'))
        self.age=int(input("enter your age"))
        self.weight=float(input("enter your weight"))
        self.height=float(input("enter your height"))
    def get_bmi_result(self):
        a=self.weight/(self.height**2)
        if(a<=18.5):
            return print("SORRY!! you are under weight")
        elif(a>=25):
            return print("OOPS!! you are obese")
        else:
            return print("CONGO!! you are healthy")    
p = person()
p.get_bmi_result()
