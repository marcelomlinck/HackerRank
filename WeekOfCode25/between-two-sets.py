#Author: Marcelo Linck
#https://www.hackerrank.com/contests/w25/challenges/between-two-sets

#!/bin/python3

import sys


n,m = input().strip().split(' ')
n,m = [int(n),int(m)]
a = [int(a_temp) for a_temp in input().strip().split(' ')]
b = [int(b_temp) for b_temp in input().strip().split(' ')]

res=0
maxb = max(b)
for x in range(1,maxb+1):
    factor = 1
    for elB in b:
        if(elB % x != 0):
            factor = 0 
    if(factor == 1):
        for elA in a:
            if(x % elA != 0):
                factor = 0
    if(factor == 1):
        res+=1
                    
print(res)
        
