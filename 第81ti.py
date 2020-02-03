def encrypt(num):
    value=0
    envrypt_num=''
    for i in range(4):
        value=num%10
        value+=5
        value%=10
        envrypt_num+=str(value)
        num//=10
    return int(envrypt_num)
 
print(encrypt(1234))
