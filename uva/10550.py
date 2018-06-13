while True:
    n, a, b, c = map(int, input().split())
    if n == 0 and a == 0 and b == 0 and c == 0:
        exit()
    d = 360*3
    d += ((n - a + 40) % 40 + (b - a + 40) % 40 + (b - c + 40) % 40) * 9
    print(d)
