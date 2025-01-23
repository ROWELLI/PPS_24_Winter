import sys
import math
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    r3 = math.sqrt((x1-x2)**2+(y1-y2)**2)
    if r3!=0 and r1+r2 > r3 and r2+r3 > r1 and r3+r1 > r2:
        print(2)
    elif r3!=0 and (r1+r2 == r3 or r2+r3 == r1 or r3+r1 == r2):
        print(1)
    elif r3 == 0 and r1 == r2:
        print(-1)
    else:
        print(0)