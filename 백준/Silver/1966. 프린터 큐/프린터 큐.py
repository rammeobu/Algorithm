from dataclasses import dataclass
from collections import deque

@dataclass
class Node:
    Pri: int
    Flag: bool = False

TestCase = int(input())
total = []

for _ in range(TestCase):
    count = 0
    n, k = map(int, input().split())
    y = list(map(int, input().split()))
    
    q = deque(Node(Pri=y[i], Flag=(i == k)) for i in range(n))
    
    while q:
        x = q.popleft()
        if any(node.Pri > x.Pri for node in q):
            q.append(x)
        else:
            count += 1
            if x.Flag:
                total.append(count)
                break
for t in total:
    print(t)
