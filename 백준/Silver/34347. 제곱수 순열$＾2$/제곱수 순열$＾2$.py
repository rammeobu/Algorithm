import math
import sys
input = sys.stdin.readline

T = int(input().strip())
for _ in range(T):
    N = int(input().strip())
    sq_cnt = math.isqrt(N)
    odd_cnt = (N + 1) // 2

    if sq_cnt < odd_cnt:
        print("NO")
        continue

    print("YES")
    B = list(range(1, N+1))
    A = [0]*N

    squares = [k*k for k in range(1, math.isqrt(N)+1)]

    need = odd_cnt
    idx_sq = 0
    for i in range(0, N, 2):
        if idx_sq < len(squares) and need > 0:
            A[i] = squares[idx_sq]
            idx_sq += 1
            need -= 1
        else:
            break

    used = set(x for x in A if x != 0)
    rem = [x for x in range(1, N+1) if x not in used]
    ri = 0
    for i in range(N):
        if A[i] == 0:
            A[i] = rem[ri]
            ri += 1

    print(" ".join(map(str, A)))
    print(" ".join(map(str, B)))
