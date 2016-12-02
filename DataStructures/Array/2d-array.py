#Author: Marcelo Linck
#https://www.hackerrank.com/challenges/2d-array

#!/bin/python3

import sys


arr = []
for arr_i in range(6):
    arr_t = [int(arr_temp) for arr_temp in input().strip().split(' ')]
    arr.append(arr_t)

sum=0
res=-100
for j in range(len(arr)):
    for i in range(len(arr[0])):
        sum = 0
        if(j+2 <= len(arr)-1 and i+2 <= len(arr[0])-1):
            sum = sum + arr[j][i] + arr[j][i+1] + arr[j][i+2] + arr[j+1][i+1] + arr[j+2][i] + arr[j+2][i+1] + arr[j+2][i+2]
            if(sum > res):
                res = sum
print(res)
        
        
        
        
        