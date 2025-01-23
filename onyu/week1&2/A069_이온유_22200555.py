import sys
from collections import deque
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n, k = map(int, input().split())

out = []
arr = deque(i for i in range(1, n+1))

while arr:
    for _ in range(k-1):
        arr.append(arr.popleft()) 
    out.append(arr.popleft())
print("<%s>" %', '.join(map(str, out)))