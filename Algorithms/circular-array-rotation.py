#Author: Marcelo Linck
#https://www.hackerrank.com/challenges/circular-array-rotation

#!/bin/python3

import sys

# n - array size
# k - number of times to rotate
# q - number of queries
# m - query (print rotated index m of the array)
# a - array

n,k,q = input().strip().split(' ')
n,k,q = [int(n),int(k),int(q)]
a = [int(a_temp) for a_temp in input().strip().split(' ')]
for i in range(k):
    temp = a[len(a)-1]
    a.pop(len(a)-1)
    a.insert(0, temp)
for a0 in range(q):
    m = int(input().strip())
    print(a[m])
