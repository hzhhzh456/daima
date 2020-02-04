
import cv2
image = cv2.imread('1.jpg')
cv2.rectangle(image, (xmin, ymin), (xmax, ymax), (0, 0, 255), 2)  
cv2.imwrite('2.jpg', image)
