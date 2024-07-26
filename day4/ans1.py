for _ in range(int(input())):
    s = input().split(" ")
    ans = ''
    for i in s:
        if i.isupper():
            ans += i
        else:
            ans += i.capitalize()
        ans += ' '
    print(ans)