def solution(players, callings):
    answer = []
    rank={}
    for i in range(len(players)):
        rank[players[i]] = i
    for name in callings:
        cur=rank[name]
        front_players=players[cur-1]
        players[cur-1],players[cur]=players[cur],players[cur-1]
        rank[name]-=1
        rank[front_players]+=1
    answer=players
    return answer