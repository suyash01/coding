import sys

for n in sys.stdin:
	n = int(n)
	p = int(input())
	print(int(round(pow(p, 1/n), 0)))