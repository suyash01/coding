n, m = map(int, input().split())
s = list(map(int, input().split()))
f = list(map(int, input().split()))
for a in s:
    if f.count(a) > 0:
        print(a, end=' ')
