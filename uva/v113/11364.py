t = int(input())
while t:
    n = int(input())
    a = list(map(int, input().split()))
    print(2*(max(a)-min(a)))
    t -= 1
