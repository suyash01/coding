n, m = map(int, input().split())
d = {}
for i in range(n):
	a, b = input().split()
	d[b] = a
for i in range(m):
	a, b = input().split()
	b = b[:-1]
	print(a + " " + b + "; #" + d[b])