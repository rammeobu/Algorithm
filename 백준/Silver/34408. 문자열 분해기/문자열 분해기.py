S = input().strip()
T = input().strip()
from collections import Counter
cs, ct = Counter(S), Counter(T)
for k, v in ct.items():
    if cs[k] < v:
        print("NEED FIX")
        exit()
i = j = 0
n, m = len(S), len(T)
while j < m:
    matched = False
    for start in range(n):
        if S.startswith(T[j], start):
            k = 0
            while j + k < m and start + k < n and S[start + k] == T[j + k]:
                k += 1
            j += k
            matched = True
            break
    if not matched:
        print("NEED FIX")
print("OK")
