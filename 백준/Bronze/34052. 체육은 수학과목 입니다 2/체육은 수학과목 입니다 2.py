time=1500
for _ in range(4):
    x=int(input())
    time-=x
if time>=0:
    print("Yes")
else:
    print("No")