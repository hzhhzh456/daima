for i in range(1,101):
    for j in range(1,51):
        for k in range(1,21):
            if(i+2*j+5*k==100):
                print("%d个1，%d个2，%d个5"%(i,j,k))
