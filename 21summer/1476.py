E, S, M = map(int, input().split())
year = 1
 
while True:
    if (year-E)%15 == 0 and (year-S)%28 == 0 and (year-M) % 19 == 0:
        print(year)
        break
    year += 1

# 제한 시간이 2초나 되면 브루트포스 쓸 수 있어서 간단하게 풀이 가능