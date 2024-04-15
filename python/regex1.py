import re
pattern1, pattern2 = r'^\d{2}-\d{8}$', r'^d{3}-\d{8}$'
list1, list2 = [], []
with open ('names.txt') as file:
    for line in file:
        name, num = line.split()
        if re.match(pattern1,num):
            list1.append(name)
        elif re.match(pattern2,num):
            list2.append()
print("names with 2 digit area codes", list1)
print("names with 3 digit area codes", list2)