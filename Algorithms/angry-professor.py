#Author: Marcelo Linck
#https://www.hackerrank.com/challenges/angry-professor

#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n,k = input().strip().split(' ')
    n,k = [int(n),int(k)]
    a = [int(a_temp) for a_temp in input().strip().split(' ')]
    th=0
    for st in a:
        if(st<=0):
            th+=1
    if(th<k):
        print("YES")
    else:
        print("NO")
    
