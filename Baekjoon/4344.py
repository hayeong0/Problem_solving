# BOJ 4344;

num = int(input())
for i in range(num):
    cnt = 0
    x = list(map(int, input().split()))
    avg = sum(x[1:]) / x[0]  
    for j in x[1:]:
        if j > avg: 
            cnt += 1
    tmp = cnt/x[0]*100
    print(f"{tmp:.3f}%")