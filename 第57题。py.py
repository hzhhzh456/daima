N = [1] 
for i in range(10):  

    L = N.copy()   
    for j in range(len(L)):   
        temp = str(L[j])
        L[j] = temp
    l = ' '.join(L).center(50) 
    print(l)      
    N.append(0)   
    N = [N[k] + N[k-1] for k in range(i+2)]
