import sys
for _ in range(int(input())):
    n = input()
    ln = len(n)
    if ln >= (10 ** 200000) or ln < 1:
        sys.exit(1) 

    i = 1
    z = 0
    l = int(n[-1])
    while l == 9:
        i += 1
        z += 1
        if i <= ln:
            l = int(n[-i])
        else: 
            l = 0 

    print(n[0:-i] + str(l + 1) + '0'*z)
