m=1000
for a in range(2,m+1):
    s=0
    l1=[]
    for i in range(1,a):
        if a%i==0:
            s+=i
            l1.append(i)
            if s==a:
                print("%d"%a,l1)


