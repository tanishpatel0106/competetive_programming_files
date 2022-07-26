from statistics import mean

for x in range(int(input())):
    n, k, v = map(int, input().split())
    integers = list(map(int, input().split()))
    #print(integers)
    average = mean(integers)
    total = sum(integers)
    #print(total)
    ans = (v*(k+n)-total)/k
    if ans > 0:
        if ans == int(ans):
            print(int(ans))
        else:
            print(-1)
    else:
        print(-1)