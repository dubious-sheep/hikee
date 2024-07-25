def dna(x):
    match x:
        case '00':
            return 'A'
        case '01':
            return 'T'
        case '10':
            return 'C'
        case '11':
            return 'G'
        case _:
            return ''

for _ in range(int(input())):
    n = int(input())
    s = input()
    ans = ''
    for i in range(0,n,2):
        ans += dna(s[i:i+2])
    print(ans)

