for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split(" ")))

    #solution 1: failed for being slow
    # print(max(a) + max([x for x in a if x != max(a)]))
    
    maxA = max(a)
    print(max(list(filter(lambda x: x != maxA ,a))) + maxA)