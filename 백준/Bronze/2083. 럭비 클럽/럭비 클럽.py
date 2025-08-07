while True:
    ch,x,y=input().split()
    if ch=="#"and x=='0' and y=='0':
        break
    if int(x)>17 or int(y)>=80:
        print(ch+" Senior")
    else:
        print(ch+" Junior")
        