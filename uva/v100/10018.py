def reverse(num):
    r = 0
    while num:
        d = num % 10
        num //= 10
        r = r * 10 + d
    return r


def palindrome(s):
    for i in range(len(s)//2):
        if s[i] != s[len(s)-i-1]:
            return False
    return True


t = int(input())
while t:
    c = 0
    n = int(input())
    while not palindrome(str(n)):
        n += reverse(n)
        c += 1
    print(c, n)
    t -= 1
