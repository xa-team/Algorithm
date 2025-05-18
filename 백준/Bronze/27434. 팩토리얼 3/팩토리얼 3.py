import sys 
sys.setrecursionlimit(10**6)

n = int(input())

def fac(n):
    factorial = 1
    for i in range(1, n+1):
        factorial *= i 
    return factorial

print(fac(n))