from collections import defaultdict

def count_chars(s):
    freq = defaultdict(int)
    for char in s:
        freq[char] += 1
    return freq

s = "Hello, World!"
print(count_chars(s))
