def solution(name, yearning, photo):
    answer = []
    name_yearning={}
    for i in range(len(name)):
        name_yearning[name[i]]=int(yearning[i])
    for i in range(len(photo)):
        temp_var = 0
        for temp_name in photo[i]:
          temp_var+=name_yearning.get(temp_name,0)
        answer.append(temp_var)
    return answer
