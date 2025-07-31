import math
x=input()
y=input()
z=input()
if y=='+':
    print(int(x)+int(z))
else:
    ex=int(math.log10(int(z)))
    x=x+"0"*ex
    print(x)