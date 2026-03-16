def solution(bandage, health, attacks):
    last_time=attacks[-1][0]
    change_health=health
    count=0
    temp_var=0
    for i in range(last_time+1):
        if i==attacks[temp_var][0]:
            count=0
            change_health-=attacks[temp_var][1]
            temp_var+= 1
        else:
            count+= 1
            if change_health<health:
                if count==bandage[0]:
                    count=0
                    change_health+=bandage[1]+bandage[2]
                    if change_health>health:
                        change_health=health
                else:
                    change_health+=bandage[1]
                    if change_health>health:
                        change_health=health
        if change_health<1:
            return -1
    answer = change_health
    return answer
print(solution([3, 2, 7], 20, [[1, 5], [5, 1]]))