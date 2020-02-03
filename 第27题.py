for i in range('X','Z'):
    for j in range('X','Z'):
        for k in range('X','Z'):
            if(i!=k and k!=j and j!=i):
                print("A VS %c,B VS %c,C VS %c",i,j,k)
                                
