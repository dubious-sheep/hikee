for _ in range(int(input())):
    x = int(input())
    s = input()
    c = s.count('C')
    n = s.count('N')
    print(60 * x if c > n else 55 * x if c == n else 40 * x)