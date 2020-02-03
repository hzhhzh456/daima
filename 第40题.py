n=int(input("请输入一个数"))
for i in range(2,n+1):
    a=1
    for j in range(2,i):
        if(i%j==0):
            a=0
            break
    if(a==1):
        print(i)
