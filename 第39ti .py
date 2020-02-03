
for i in range(2,101):
    a=1
    for j in range(2,i):
        if(i%j==0):
            a=0
            break
    if(a==1):
        print(i)
