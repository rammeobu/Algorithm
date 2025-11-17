w=[]
while True:
    word=input().strip()
    match word:
        case "animal":
            w.append("Panthera tigris")
            continue
        case "tree":
            w.append("Pinus densiflora")
            continue
        case "flower":
            w.append("Forsythia koreana")
            continue
        case "end" :
            for i in w:
                print(i)
            break