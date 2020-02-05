import random
tmp=""
for i in range(0,4):
    n=random.randrange(0,3)
    if n==0:
        num=random.randint(0,10)
        tmp+=str(num)
    if n==1:
        num=random.randrange(65,91)
        tmp+=chr(num)
    if n==2:
        num=random.randrange(97,122)
        tmp+=chr(num)
print(tmp)
