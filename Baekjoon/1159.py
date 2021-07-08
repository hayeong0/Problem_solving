# BOJ 1159.py

n = int(input())
arr = []
for _ in range(n):
    tmp = input()
    arr.append(tmp[0])

names = set(arr)
res = []
for i in names:
    if arr.count(i) >= 5:
        res.append(i)
print(''.join(sorted(res)) if len(res) > 0 else "PREDAJA")