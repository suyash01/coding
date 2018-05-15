n,m = map(int, input().split())
nm = n*m
i = 0
while nm > 0:
	i = i+1
	nm = nm - (n+m-2*i+1)
if i%2==0:
	print("Malvika")
else:
	print("Akshat")
