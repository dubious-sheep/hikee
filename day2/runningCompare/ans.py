t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int,input().split(" ")))
    b = list(map(int,input().split(" ")))

    count= 0
    for i in range(n):
        diff = abs(a[i]-b[i])
        if a[i] >= diff and b[i] >= diff: count += 1
    
    print(count)
    
    
