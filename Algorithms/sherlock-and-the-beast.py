#Author: Marcelo Linck
#https://www.hackerrank.com/challenges/sherlock-and-the-beast

#!/bin/python3

import sys
import math
    
t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    z=n 
    while(z%3!=0):
        z-=5
    if(z<0): 
        print('-1')
    else:
        print(z*'5'+(n-z)*'3')            
    
