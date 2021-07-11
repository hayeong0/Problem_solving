# BOJ 5355.py

for _ in range(int(input())):
    T = input().split()
    num = float(T[0])
    for i in T[1:]:
        if i == '@':
            num *= 3 
        elif i == '#':
            num -= 7
        elif i == '%':
            num += 5    
    print("%.2f" %(num))

# 한 줄 입력을 list(map(str, input().split(" ")))으로 받아도 되지만 좀 더 효율적인 코드.. 
# 단순 연산
  