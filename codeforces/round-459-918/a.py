n = int(input())
l = [1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987]
for i in range(n):
	if (i+1) in l:
		print('O', end='')
	else:
		print('o', end='')