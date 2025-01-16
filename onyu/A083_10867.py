import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

v = int(input())
p = [0]*1001
n = [0]*1001
arr = list(map(int, input().split()))

for i in range(v):
    if arr[i] >= 0:
        p[arr[i]] += 1
    else:
        n[abs(arr[i])] += 1

for i in range(1000, 0, -1):
    if n[i] > 0:
        print("-%d" %i, end=" ")
for i in range(1001):
    if p[i] > 0:
        print(i, end=" ")