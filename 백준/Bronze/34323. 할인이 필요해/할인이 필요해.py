N, M, S = map(int, input().split())
a = (S * (M+1) * (100-N)) // 100  
b = S * M                         
print(min(a, b))
