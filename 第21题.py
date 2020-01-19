list1=list(input('请输入一串字符:'))
letter=[]
space=[]
number=[]
other=[]
for i in range(len(list1)):
    if ord(list1[i]) in range(65,91) or ord(list1[i]) in range(97,123):
        letter.append(list1[i])
    elif list1[i]==' ':
        space.append(' ')
    elif ord(list1[i]) in range (48,58):
        number.append(list1[i])
    else :
        other.append(list[i])
print ('英文字母的个数: %s' %len(letter))
print ('空格的个数: %s' %len(space))
print ('数字的个数: %s' %len(number))
print ('其他字符的个数: %s' %len(other))
