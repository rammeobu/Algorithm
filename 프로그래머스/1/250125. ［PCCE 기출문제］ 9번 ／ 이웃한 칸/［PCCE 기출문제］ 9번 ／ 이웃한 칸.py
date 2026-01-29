def solution(board, h, w):
    answer = 0
    dx=[-1,1,0,0]
    dy=[0,0,-1,1]
    for i in range(4):
        dh = dx[i] + h
        dw = dy[i] + w
        if 0 <= dh < len(board) and 0 <= dw < len(board[0]):
            if board[dh][dw]==board[h][w]:
                answer+=1
    return answer