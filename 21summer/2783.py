# BOJ 2783

x, y = map(int, input().split())
arr = [x/y]
for _ in range(int(input())):
    x, y = map(int, input().split())
    arr.append(x/y)
    
print("%.2f" % (min(arr)*1000))
