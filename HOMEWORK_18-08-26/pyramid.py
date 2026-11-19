import sys
import time
sys.setrecursionlimit(100000)

n = int(input(""))

def rec(n,i=1):
    if i==n*2:
        return
    if i%2!=0:  
        print(" "*(n-(i//2)-1),end="")  
        print("*"*i)
        time.sleep(0.2)
    rec(n,i+1)
    
rec(n)