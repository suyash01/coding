n, m = map(int, input().split())
l = [0]*n
for i in range(n):
	a, b = map(int, input().split())
	l[i] = a/b
print(m*min(l))
