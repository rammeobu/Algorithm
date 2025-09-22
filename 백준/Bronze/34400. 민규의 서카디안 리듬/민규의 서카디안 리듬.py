x = int(input())
results = []
for _ in range(x):
    t = int(input())
    now = t % 25
    if now < 17:   
        results.append("ONLINE")
    else:          
        results.append("OFFLINE")
print("\n".join(results))
