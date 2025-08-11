done=list()
for _ in range(3):
    count=int(input())
    x=0
    for _ in range(count):
     x+=int(input())
    if x>0:
       done.append("+")
    elif x<0:
       done.append("-")
    else:
       done.append("0")
for i in range(3):
   print(done[i])