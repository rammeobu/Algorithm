rows,cols=input().split()
black=["BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB"]
white=["WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW"]
bord=[input() for _ in range(int(rows))]
total=float('inf')
for i in range(int(rows)-7):
    for j in range(int(cols)-7):
        cnt_black=0
        cnt_white=0
        for x in range(8):
            for y in range(8):
                if bord[i+x][j+y]!=black[x][y]:
                    cnt_black+=1    
                if bord[i+x][j+y]!=white[x][y]:
                    cnt_white+=1  
        total=min(total,cnt_black,cnt_white)
print(total)                    