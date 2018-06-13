stones = {'purple': 'Power', 'green': 'Time', 'blue': 'Space', 'orange': 'Soul', 'red': 'Reality', 'yellow': 'Mind'}
n = int(input())
for _ in range(n):
    s = input()
    del stones[s]
print(len(stones))
for k, v in stones.items():
    print(v)
