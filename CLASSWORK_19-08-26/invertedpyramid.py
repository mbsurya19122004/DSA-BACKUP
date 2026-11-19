import sys
import time
sys.setrecursionlimit(100000)

def inv(n , i = 0):
    if n<1:
        return
    print(" "*(i),end="")
    print("*"*((n-1)*2 + 1))
    
    inv(n-1,i+1)

n = int(input())
inv(n)