import math
for a in range(1,100000):
    i=int(math.sqrt(a+100))
    j=int(math.sqrt(a+268))
    if (i*i==a+100 and j*j==a+268):
        print(a)
        
