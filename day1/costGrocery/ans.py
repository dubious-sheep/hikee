T = int(input())
for t in range(T):
    n , x = list(map(int,input().split(" ")))
    fresh = list(map(int,input().split(" ")))
    cost = list(map(int,input().split(" ")))

    total = 0
    for i in range(n):
        if  fresh[i] >= x:
            total += cost[i] 

    print(total)
