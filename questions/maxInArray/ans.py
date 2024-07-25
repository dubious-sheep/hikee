result = []
for i in range(0,int(input())):
    n = int(input())
    maxh = -float('inf')
    for _ in range(n):
        h = int(input())
        if h > maxh:
            maxh = h
    result.append(maxh)
print("output:")
for i in result:
    print(i)