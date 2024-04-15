from collections import namedtuple

# Create a namedtuple subclass 'Animal' with fields 'name' and 'type'
Animal = namedtuple('Animal', ['name', 'type'])

# Create an instance of Animal
cat = Animal('cat', 'mammal')

print(cat)

# Create a new instance of Animal from a list using _make()
dog = Animal._make(['dog', 'mammal'])

print(dog)

# Convert the namedtuple to an OrderedDict using _asdict()
cat_dict = cat._asdict()

print(cat_dict)
