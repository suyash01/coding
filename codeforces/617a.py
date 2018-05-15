x = int(input())
c = 0
c = c + (x//5)
x = x%5
c = c + (x//4)
x = x%4
c = c + (x//3)
x = x%3
c = c + (x//2)
x = x%2
c = c + x
print(c)
