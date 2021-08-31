# BOJ 11062 (https://www.acmicpc.net/problem/11062)
import sys
input = sys.stdin.readline
T = int(input()) 

for _ in range(T):
    N = int(input())
    dp = [[0 for _ in range(N)] for _ in range(N)]
    card = list(map(int, input().strip().split()))
    turn = True if N%2 == 1 else False

    for j in range(N): 
        for i in range(N-j): 
            if j == 0: 
                dp[i][i+j] = card[i] if turn else 0 
            elif turn: 
                dp[i][i+j] = max(dp[i+1][i+j] + card[i], dp[i][i+j-1] + card[i+j]) 
            else:
                dp[i][i+j] = min(dp[i+1][i+j], dp[i][i+j-1]) 
        turn = not turn 
    print(dp[0][N-1])