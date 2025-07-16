mylist = [0] * 26
spell=list(input())
for i in spell:
    mylist[ord(i) - 97] += 1
print(*mylist)
