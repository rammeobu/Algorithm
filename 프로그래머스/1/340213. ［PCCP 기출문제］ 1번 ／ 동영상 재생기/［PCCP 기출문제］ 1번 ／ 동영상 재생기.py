def solution(video_len, pos, op_start, op_end, commands):
    answer = ""
    total_len=int(video_len[0:2])*60+int(video_len[3:5])
    flags_sec=int(pos[0:2])*60+int(pos[3:5])
    start_op_sec=int(op_start[0:2])*60+int(op_start[3:5])
    end_op_sec=int(op_end[0:2])*60+int(op_end[3:5])
    for i in range(len(commands)):
        if start_op_sec<=flags_sec<=end_op_sec:
            flags_sec=end_op_sec
        if commands[i]=="next":
            if flags_sec+10>total_len:
                flags_sec=total_len
            else:
                flags_sec+=10
        elif commands[i]=="prev":
            if flags_sec-10<0:
                flags_sec=0
            else:
                flags_sec-=10
    if start_op_sec <= flags_sec <= end_op_sec:
        flags_sec = end_op_sec
    hour=flags_sec//60
    sec=flags_sec-60*hour
    hour="0"+str(hour)if hour<10 else str(hour)
    sec="0"+str(sec)if sec<10 else str(sec)
    answer=hour+":"+sec
    return answer