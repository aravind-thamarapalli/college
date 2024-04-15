from collections import ChainMap

def merge_dicts(dict1, dict2):
    merged_dict = ChainMap(dict1, dict2)
    return merged_dict

dict1 = {"apple": 1, "banana": 2}
dict2 = {"orange": 3, "mango": 4}
print(merge_dicts(dict1, dict2))
