b_list=input("请输入数据")
a_list=[]
for i in b_list.split(','):
                a_list.append(i)
print("逆置前数据为：",a_list)
n=len(a_list)
for i in range(n//2):
    a_list[i],a_list[n-i-1]=a_list[n-i-1],a_list[i]
print("逆置后数据为:",a_list)
