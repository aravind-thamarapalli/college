from collections import OrderedDict

od = OrderedDict()

od['a'] = 1
od['b'] = 2
od['c'] = 3

for key, value in od.items():
    print(key, value)
