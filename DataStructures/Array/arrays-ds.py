#Author: Marcelo Linck
#https://www.hackerrank.com/challenges/arrays-ds

#!/bin/python3

import sys


n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

arr.reverse()
arrs = list(map(str, arr))
print(' '.join(arrs))
