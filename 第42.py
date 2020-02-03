str = input('请输入9个数字，用空格隔开，以形成3*3矩阵：')
n = [int(i) for i in str.split(' ')]  #获取9个数字
mx = []  #存储矩阵
for i in range(3):
    mt = []  #收集矩阵中每行的数字列表
    for j in range(3):
            mt.append(n[i*3 + j])
    mx.append(mt)  #每行数字存储进mx列表
    print(mt)
sum1 = 0
sum2 = 0
for i in range(3):
    sum1 += mx[i][i]
    sum2 += mx[2-i][i]
print('\方向对角线3元素之和为：%s' % sum1)
