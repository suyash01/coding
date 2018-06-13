t = int(input())
while t:
    a, b = map(int, input().split())
    s1 = (a+b)//2
    s2 = (a-b)//2
    if s1 < 0 or s2 < 0 or (a % 2 == 1 and b % 2 != 1) or (a % 2 != 1 and b % 2 == 1):
        print("impossible")
    else:
        print(s1, s2)
    t -= 1
