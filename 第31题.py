def jiecheng(n):
    if n==0:
        f=1
    else:
        f=jiecheng(n-1)*n;
    return f

n=5
f=jiecheng(5)
print("5!=%d"%f)
