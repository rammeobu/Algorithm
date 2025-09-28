
p = [
    [1,2,3,4,5],
    [2,3,4,5,6],
    [3,4,5,6,7],
    [4,5,6,7,8],
    [5,6,7,8,9]
]

c = list(map(int, input().split()))  
min_ch = float('inf')
best = []

for pat in p:
    missing = set(pat) - set(c)
    change = len(missing)
    
    if change < min_ch:
        min_ch = change
        best = pat

print(min_ch)
