#Author: Marcelo Linck
#https://www.hackerrank.com/contests/projecteuler/challenges/euler002

#!/bin/python3

import sys

def fib(ssum, fib1, fib2):
    fib3 = 0
    fib3 += fib1 + fib2
    if(fib3 < n):
        if(fib3 % 2 == 0):
            ssum += fib3
        fib(ssum, fib2, fib3)
    else:
        print(ssum)

t = int(input().strip())
for a0 in range(t):
    f = 0
    n = int(input().strip())
    ssum = 0
    fib1 = 0
    fib2 = 1
    if(n < 1):
        print("0")
    else:
        fib(ssum, fib1, fib2)