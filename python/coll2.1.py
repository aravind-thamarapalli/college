from collections import deque

d = deque()

d.append('a')
d.append('b')

d.appendleft('c')

print("Deque after appending:", d)

d.pop()

d.popleft()

print("Deque after popping:", d)
