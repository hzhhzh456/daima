count=0
for i in range(1,5):
    for j in range (1,5):
        for k in range(1,5):
            if i!=j and i!=k and k!=j:
                a=i*100+j*10+k
                count=count+1
                print("%d"%a)
print("共有%d种"%count)
    
