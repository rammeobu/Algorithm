x=int(input())
count=0
for _ in range(x):
    word=input()
    empty=[]
    prev=''
    for ch in word:
        if ch != prev:
            if ch in empty:
                break
            empty.append(ch)
        prev=ch           
    else:
        count+=1     
print(count)        