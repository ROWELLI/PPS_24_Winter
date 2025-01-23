import sys
from collections import deque
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
arr = deque(i for i in range(1,n+1))
i = 0
while len(arr) != 1:
    if i%2 != 1:
        arr.popleft()
    else:
        v = arr.popleft()
        arr.append(v)
    i+=1
print(arr[0])