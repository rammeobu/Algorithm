init=input()
digits=list(map(int,str(init)))
digits.sort(reverse=True)
print("".join(map(str, digits)))
