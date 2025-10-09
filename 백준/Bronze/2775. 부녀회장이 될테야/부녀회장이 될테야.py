x=int(input())
for _ in range(x):
    rows = int(input())
    cols  = int(input())
    dp = [[0]*(cols+1) for _ in range(rows+1)]
    for c in range(1,cols+1):
        dp[0][c]=c
    for r in range(0,rows+1):
        dp[r][1]=1    
    for r in range(1,rows+1):
        for c in range(2,cols+1):
            dp[r][c]=dp[r][c-1]+dp[r-1][c]
    print(dp[rows][cols])        