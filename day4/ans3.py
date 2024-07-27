import sys
# v = ['a','e','i','o','u']
def csum(ss):
    return sum('aeiou'.count(x) for x in ss)

for _ in range(int(input())):
    s = input()
    if len(s) < 3 and len(s) > 1000:
        sys.exit(1)

    flag = 0
    #* option 1
    # for i in range(len(s)-2):
    #     if s[i] in v and s[i+1] in v and s[i+2] in v:
    #         flag = 1

    # ans = "happy" if flag == 1 else "sad"
    # print(ans)

    #* option 2 using count
    for i in range(len(s)-2):
        if csum(s[i:i+3]) == 3:
            flag = 1
    print("happy" if flag == 1 else "sad")


#?  editorialist's interesting approach
#   print('Happy' if sum(count(s[i:i+3]) for i in range(len(s)-2)) > 0 else 'Sad')
