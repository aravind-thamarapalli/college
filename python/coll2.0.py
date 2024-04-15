from collections import namedtuple

Person = namedtuple('Person', ['name', 'age'])

data = ['Alice', 25]
alice = Person._make(data)

print(alice)

alice_dict = alice._asdict()

print(alice_dict)
