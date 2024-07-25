t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split(" ")))

    # Option 1:
    # m = min(arr)
    # count= 0
    # for num in arr:
    #     if(m != num): count += 1

    # print(count)

    #Best option: 
    print(n - arr.count(min(arr)))