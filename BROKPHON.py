# cook your dish here
for _ in range(int(input())):
    N=int(input())
    L=list(map(int,input().split()))
    a=[]
    for i in range (1,N) :
        if(L[i] != L[i-1]) :
            a.append(i)
            a.append(i-1)
        
    ans=set(a)
    print(len(ans))