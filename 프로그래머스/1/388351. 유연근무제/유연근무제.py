def solution(schedules, timelogs, startday):
    hour=[0]*len(schedules)
    min=[0]*len(schedules)
    answer = 0
    for i in range(len(schedules)):
        hour[i]=schedules[i]//100
        min[i]=(schedules[i]+10)%100
        if min[i]>=60:
            min[i]-=60
            hour[i]+=1
    for i in range(len(timelogs)):
        flags = True
        day = startday
        for j in range(len(timelogs[i])):
             temp_hour=timelogs[i][j]//100
             temp_min=timelogs[i][j]%100
             if day==6 or day==7:
                 day+=1
                 if day==8:
                     day=1
                 continue
             if temp_hour > hour[i] or (temp_hour == hour[i] and temp_min > min[i]):
                 flags = False
                 break
             day+=1
             if day==8:
                 day=1
        if flags:
           answer+=1
    return answer