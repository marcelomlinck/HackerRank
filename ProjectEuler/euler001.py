#Author: Marcelo Linck
#https://www.hackerrank.com/contests/projecteuler/challenges/euler001

#!/bin/python3

import sys
import math

t = int(input().strip())
for a0 in range(t):
    i = 0
    s = 0
    n = int(input().strip())
    n = n-1
    s = 3 * ((math.floor(n/3)  *  ((math.floor(n/3))+1)) >> 1)
    s += 5 * ((math.floor(n/5)  * ((math.floor(n/5))+1)) >> 1)
    s -= 15 * ((math.floor(n/15) * ((math.floor(n/15))+1)) >> 1)
    print(int(s))
