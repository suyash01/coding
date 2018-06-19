def find(n):
	for i in range(33):
		for j in range(14):
			r = i*3 + j*7
			if r == n:
				print("YES")
				return
	print("NO")

t = int(input());
while t:
	n = int(input())
	find(n)
	t = t-1
