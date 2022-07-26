t=int(input())
for i in range(t):
    n=int(input())
    a=[]
    for j in range(n):
        a.append(input())
    for k in range(n-1):
            a[k+1]=bin(int(a[k],2)^int(a[k+1],2))
    m=a[n-1]
    x=0
    for s in m:
        if s=='1':
            x+=1
    print(x)  