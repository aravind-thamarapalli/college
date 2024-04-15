from collections import Counter

list_counter = Counter(['a', 'b', 'c', 'a', 'b', 'b'])
print("Counter from list:", list_counter)

string_counter = Counter("abcabcbb")
print("Counter from string:", string_counter)

dict_counter = Counter({'a': 2, 'b': 3, 'c': 1})
print("Counter from dictionary:", dict_counter)

kwargs_counter = Counter(a=2, b=3, c=1)
print("Counter from keyword arguments:", kwargs_counter)
