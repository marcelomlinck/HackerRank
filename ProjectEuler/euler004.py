
#Author: Marcelo Linck
#https://www.hackerrank.com/contests/projecteuler/challenges/euler004/
#Can't succeed testcase#3

#!/bin/python3

import sys
import math

t = int(input().strip())
for a0 in range(t):
    found = 0
    n = int(input().strip())
    n -= 1
    while(1):
        if(n < 101101): 
            break
        strn = str(n)
        if(len(strn) % 2 == 0 and n < 999*999):
            strn1 = strn[0:int(math.floor(len(strn)/2))]
            strn2 = strn[int(math.floor(len(strn)/2)):len(strn)]
            if(strn1 == strn2[::-1]):
                for i in range(999, 100, -1):
                    for j in range(999, 100, -1):
                        if(n % i == 0 and n % j == 0 and i*j == n):
                            found = 1
                            break
                    if(found == 1):
                        break
                if(found == 1):
                    break
        n -= 1        
    print(n)
