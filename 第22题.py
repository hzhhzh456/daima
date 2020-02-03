sum=0
a=int(input("请输入数字a"))
n=int(input("请输入位数n"))
h=a
for i in range(1,n+1):
    sum=sum+h
    h=10*h+h
print(sum)
