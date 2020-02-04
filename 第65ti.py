def func(a):                             
    '求一个字符串的长度'
    len=0
    for i in a:
        len+=1
    return len
if __name__=='__main__':                 

    str_input=input('请输出一个字符串')  
    str_len=func(str_input)              
    print("输入字符串长度：", str_len)  
