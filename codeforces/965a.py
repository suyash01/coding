from math import *
k, n, s, p = map(int, input().split())
p1 = int(ceil(n/s))*k
print(int(ceil(p1/p)))
