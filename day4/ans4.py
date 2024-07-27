for _ in range(int(input())):
    n = int(input())
    s = input()

    sa = 1
    ap, bp = 0 , 0

    for i in range(n):
        if s[i] == 'A':
            if sa == 1:
                ap += 1
            else:
                sa = 1
        else:
            if sa == 0:
                bp += 1
            else:
                sa = 0

    print(ap,bp)
