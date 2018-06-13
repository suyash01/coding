from math import log
x, y = map(int, input().split())
if x == 1 and y == 1:
    print('=')
    exit()
elif x == 1:
    print('<')
    exit()
elif y == 1:
    print('>')
    exit()
xy = y
yx = x * log(y, x)
if xy == yx:
    print('=')
elif xy > yx:
    print('>')
else:
    print('<')
