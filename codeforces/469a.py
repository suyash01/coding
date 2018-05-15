n = int(input())
a = list(map(int, input().split()))
s = set(a[1:])
a = list(map(int, input().split()))
s.update(a[1:])
if len(s) == n:
	print("I become the guy.")
else:
	print("Oh, my keyboard!")
