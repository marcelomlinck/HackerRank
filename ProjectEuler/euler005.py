#Author: Marcelo Linck
#https://www.hackerrank.com/contests/projecteuler/challenges/euler005

#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    j = n
    while(1):
        notFound = 0
        for i in range(1,n+1):
            if(j % i != 0):
                notFound = 1
                j += 1
                break
        if(notFound == 0):
            break
    print(j)
       
                
