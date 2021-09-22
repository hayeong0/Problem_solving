# BOJ 1002 (https://www.acmicpc.net/problem/1002)
# 두 원의 외접, 내접에 대한 수학 문제

import math

T = int(input())

for _ in range(T):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    r = math.sqrt((x1-x2)**2 + (y1-y2)**2)  #distance
    R = [r1, r2, r]

    tmp = max(R)
    R.remove(tmp)

    if r == 0 and r1 == r2:  
        print(-1)
    elif r == r1 + r2 or tmp == sum(R):   
        print(1)
    elif tmp > sum(R):    
        print(0)
    else:   
        print(2)