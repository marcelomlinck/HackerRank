#Author: Marcelo Linck
#https://www.hackerrank.com/challenges/largest-rectangle

n = int(input().strip())
h = [int(x) for x in input().strip().split(' ')]
A = [0] * n
for i in range(n):
    a = h[i]
    for j in range(i+1,n):
        if h[j] >= h[i]:
            a += h[i]
        else:
            break
    A[i] += a

h.reverse()
A.reverse()

for i in range(n):
    a = 0
    for j in range(i+1,n):
        if h[j] >= h[i]:
            a += h[i]
        else:
            break
    A[i] += a

print(max(A))