import math

theta = int(input())

if theta == 0:
    print(-1)
else:
    g = math.gcd(360, theta)
    print(360 // g)
