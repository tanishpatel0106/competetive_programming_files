a = int(input())
for i in range(a):
    t = int(input())
    if (t<=100):
        print(t)
    elif (t>100 and t<=1000):
        print(t-25)
    elif (t>1000 and t<=5000):
        print(t-100)
    elif (t>5000):
        print(t-500)
