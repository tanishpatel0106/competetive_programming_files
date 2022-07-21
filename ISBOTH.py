# cook your dish here

b=int(input())
if(b%5==0 and b%11==0):
    print("BOTH")
elif(b%5 ==0 or b%11==0):
    print("ONE")
else:
    print("NONE")