rows = int(input().strip())
bord = [input().strip() for _ in range(rows)]
dx, dy = -1, +1
Word = "KUMOH"
maxcols = max(len(row) for row in bord)

def count_occurrences(s, word):
    cnt = 0
    for i in range(len(s) - len(word) + 1):
        if s[i:i+len(word)] == word:
            cnt += 1
    return cnt

Startpoint = [(i, 0) for i in range(rows)] + [(rows - 1, j) for j in range(1, maxcols)]

Count = 0
for i, j in Startpoint:
    T = ""
    x, y = i, j
    while 0 <= x < rows and 0 <= y < maxcols:
        if y < len(bord[x]):
            T += bord[x][y]
        x += dx
        y += dy

    X = count_occurrences(T, Word)
    Y = count_occurrences(T[::-1], Word)
    Count += max(X, Y)
print(Count)
