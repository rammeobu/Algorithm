total=0
while True:
    init=input()
    total=0
    if "0"==str(init):
        break
    if len(init)==1:
        total+=2
        match(init):
            case "1":
                total+=2
            case "0":
                total+=4
            case _:
                total+=3
    elif len(init)==2:
        total+=3
        for i in range(len(init)):
            match(init[i]):
                case "1":
                 total+=2
                case "0":
                 total+=4
                case _:
                 total+=3
    elif len(init)==3:
       total+=4
       for i in range(len(init)):
            match(init[i]):
                case "1":
                 total+=2

                case "0":
                 total+=4

                case _:
                 total+=3
    else:
       total+=5
       for i in range(len(init)):
            match(init[i]):
                case "1":
                 total+=2

                case "0":
                 total+=4

                case _:
                 total+=3
    print(total)               
                                              

