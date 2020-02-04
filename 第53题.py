board = 50
# 画圆半径
circle_radius = 20
# 是否空心 0是空心，1是实心
hollow = 0
# 画布填充
board_border = "□"
# 圆边界填充
circle_border = " "
 
 
circle_center = [int(board / 2), int(board / 2)]
# 找到圆心
cx = circle_center[0]
cy = circle_center[1]
for i in range(1,board):
    begin = 0
    rank = []
    # 编辑每行，在圆边上的打上标记
    for j in range(1,board):
        if (cx - i) * (cx - i) + (cy - j) * (cy - j) <= circle_radius * circle_radius:
            if begin == 0:
                begin = 1
                rank.append(circle_border)
                bn = j
            else:
                if hollow == 0:
                    rank.append(" ")
                else:
                    rank.append(circle_border)
            if (cx - i) * (cx - i) + (cy - j - 1) * (cy - j - 1) > circle_radius * circle_radius:
                begin = 0
                if bn == j:
                    pass
                else:
                    rank.append(circle_border)
                # break
        else:
            rank.append(board_border)
 
    if rank.__len__() != 0:
        print(''.join(rank))
