
def solution(mets,park):
    mets.sort()
    answer=0
    flag=0
    for x in range(len(park)):
        for y in range(len(park[x])):
            if flag >= len(mets):
                return answer if answer != 0 else -1
            if park[x][y]=="-1":
               dx=x+mets[flag]-1
               dy=y+mets[flag]-1
               if dx<len(park) and dy<len(park[x]):
                   temp_var=True
                   for i in range(x,dx+1):
                       for j in range(y,dy+1):
                           if not park[i][j] =="-1":
                               temp_var=False
                               break
                       if not temp_var:
                           break
                   if temp_var:
                       answer = mets[flag]
                       flag+=1

    if answer==0:
        return -1
    else:
        return answer
