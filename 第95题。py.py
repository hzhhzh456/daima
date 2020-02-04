import sys
a = list(map(int, input().split()))
n_max=a[0]
n_all=a[1:]
for m in range(0,n_max+1):
    if m not in n_all:
        print (m)
    else:
        continue
