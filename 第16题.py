a=int(input())
for i in range(2,a+1):
    while(a!=i):
        if(a%i==0):
            print(i)
            a=a/i
        else:
            break
print(a)

        
    
