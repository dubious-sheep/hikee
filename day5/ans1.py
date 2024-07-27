for _ in range(int(input())):
    n = int(input())
    r = list(map(int,input().split(" ")))
    isSort = True

    for i in range(n-1):
        for j in range(i+1,n):
            if r[i] > r[j]:
                isSort = False
                break

    print("yes" if isSort else "no")

