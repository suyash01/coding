from math import ceil
t = int(input())
while t:
    a, b = map(int, input().split())
    a = int(ceil((a-2)/3))
    b = int(ceil((b-2)/3))
    print(a*b)
    t -= 1
