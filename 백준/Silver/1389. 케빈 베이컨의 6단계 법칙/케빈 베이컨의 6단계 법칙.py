import sys

N, M = map(int, input().split())

dist = [[sys.maxsize for j in range(N+1)] for i in range(N+1)]

for i in range(1,N+1):
    dist[i][i] = 0

for i in range(M):
    s, e = map(int, input().split())
    dist[s][e]=1
    dist[e][s]=1

for k in range(1, N+1):
    for i in range(1, N+1):
        for j in range(1, N+1):
            if dist[i][j] > dist[i][k]+dist[k][j]:
                dist[i][j] = dist[i][k]+dist[k][j]

Min = sys.maxsize
Ans=-1

for i in range(1, N+1):
    temp = 0
    for j in range(1,N+1):
        temp+= dist[i][j]  
    
    if Min > temp:
        Min = temp
        Ans = i

print(Ans)