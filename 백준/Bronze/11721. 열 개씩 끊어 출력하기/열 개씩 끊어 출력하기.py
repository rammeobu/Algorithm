x = list(input())
for i in range(len(x)):
    print(x[i], end='')
    if (i + 1) % 10 == 0:
        print()
