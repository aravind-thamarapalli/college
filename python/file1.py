from pack1 import module1 as m1, module2 as m2
print("enter two numbers")
a=int(input())
b=int(input())
print("addition=",m1.add(a,b))
print("substration=",m1.sub(a,b))
print("multiplication=",m1.mul(a,b))
print("division=",m1.div(a,b))
print("remainder=",m1.rem(a,b))
print("enter value in centimetre")
c=int(input())
print(c,"in metres=",m2.metr(c),"m")
print(c,"in inches=",m2.inch(c),"in")
print(c,"in kilo metres=",m2.km(c),"km")