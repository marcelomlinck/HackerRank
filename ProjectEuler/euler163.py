#Author: Marcelo Linck
#https://www.hackerrank.com/contests/projecteuler/challenges/euler163

import sys
import math

def triangle(n):
    return (1678*n**3 + 3117*n**2 + 88*n - n%2*345 - n%3*320 - n%4*90 - 
          (n**3 - n**2 + n)%5 * 288) // 240       


inp = int(input())
res = triangle(inp)
print(res)