a=1
b=2
c=0
print("%d/%d"%(a,b))
a=2
b=3
print("%d/%d"%(a,b))
for i in range (1,20):
    c=a
    a=b
    b=c+b
    
    
    print("%d/%d"%(a,b))
