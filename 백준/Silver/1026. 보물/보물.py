x = int(input())
intlist = list(map(int, input().split()))
blist = list(map(int, input().split()))
intlist.sort()
blist.sort(reverse=True)
empty = 0
for i in range(x):
    empty += intlist[i] * blist[i]
print(empty)
