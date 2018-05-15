n = int(input())
arr = list(map(int, input().split()))
minv = min(arr)
maxv = max(arr)
mini = 0
maxi = 0
for i in range(n):
	if arr[i] == maxv:
		maxi = i
		break
for i in range(n):
	if arr[i] == minv:
		mini = i
if maxi > mini:
	print(maxi+n-mini-2)
else:
	print(maxi+n-mini-1)
