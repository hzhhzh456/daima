def write():
    with open("test.txt",'r+') as f:
        str=input("please input a string:\n")
        str=str.upper()
        f.write(str)



write()
