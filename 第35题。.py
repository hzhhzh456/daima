a=int(input("请输入一个五位数"))
b=a//10000
c=a%10000//1000
d=a%1000//100
e=a%100//10
f=a%10
if(b==f and c==e):
    print("该数为回文数")
else:
    print("该数不为回文数")
