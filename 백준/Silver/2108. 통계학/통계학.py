import sys
input = sys.stdin.readline
x = int(input())
array = [int(input()) for _ in range(x)]
total = sum(array)
print(round(total / x))
test = [0] * 8001
for num in array:
    test[num + 4000] += 1
count = 0
for i in range(8001):
    count += test[i]
    if count > x // 2:
        print(i - 4000)
        break
max_test = max(test)
modes = [i - 4000 for i, f in enumerate(test) if f == max_test]
modes.sort()
print(modes[1] if len(modes) > 1 else modes[0])
for i in range(8001):
    if test[i] != 0:
        min_val = i - 4000
        break
for i in range(8000, -1, -1):
    if test[i] != 0:
        max_val = i - 4000
        break
print(max_val - min_val)
