import time
for i in range(10):
    print(time.strftime('%Y-%m-%d %H:%M:%S', time.localtime()))
    time.sleep(1)

