def max(a, b):
    if a > b:
        return a
    else:
        return b

def min(a, b):
    if a < b:
        return a
    else:
        return b


t = int(input())
for i in range(t):
    a = int(input())
    b = int(input())
    maxnum = max(a, b)
    minnum = min(a, b)
    flg = 0
    while(minnum<=maxnum):
        if(minnum==maxnum):
            print("YES")
            flg = 1
        minnum *= 2
    if(flg==0):
        print("NO")
