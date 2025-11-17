N,M,K=map(int,input().split())
test=list(map(int,input().split()))
board=[0]*M
for i in test:
    min_val=board.index(min(board))
    board[min_val]+=i
min_test=min(board)
if min_test<=K:
    print("WAIT")
else:
    print("GO")