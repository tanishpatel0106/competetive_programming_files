T = int(input())
for i in range(T):
    N = int(input())
    S = input()
    count = 1
    for i in range(0,len(S)):
        if i < len(S)-1:
            if int(S[i]) == 1 and int(S[i+1]) == 0:
                count += 1 
    print(count)