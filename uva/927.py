t = int(input())
while t:
    c = list(map(int, input().split()))
    c = c[1:]
    d = int(input())
    k = int(input())
    n = 0
    for i in range(2000):
        r = (d*i*(i+1))//2
        if r >= k:
            n = i
            break
    b = 0
    for i in range(len(c)):
        b += c[i]*pow(n, i)
    print(b)
    t -= 1
