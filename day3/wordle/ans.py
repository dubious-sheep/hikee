for _ in range(int(input())):
    s = input().lower()
    t = input().lower()
    m = ''
    for i in range(len(s)):
        if s[i] == t[i]:
            m += 'g'
        else: 
            m += 'b'
    print(m)