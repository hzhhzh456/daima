import cv2
import numpy as np
 
img=np.zeros((512,512,3),np.uint8) #设置背景
cv2.ellipse(img, (260, 240), (170, 130), 0, 0, 360, (255, 255, 255), 3) #画椭圆
cv2.imshow("test",img) #显示
cv2.waitKey(0) #按下任意键退出
cv2.destroyAllWindows()
