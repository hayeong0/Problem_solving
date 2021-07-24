# BOJ 10250.py

for _ in range(int(input())):
    h, w, n = map(int, input().split())
    floor = n%h
    num = n//h+1
    if floor == 0:      
        num = n//h 
        floor = h
    print(f'{floor*100+num}')