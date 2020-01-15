a=int(input("请输入第1个数据:"))
b=int(input("请输入第2个数据:"))
c=int(input("请输入第3个数据:"))

if a>b:
    a,b=b,a
if a>c:
    a,c=c,a
if b>c:
   b,c=c,b
print(a,b,c)
