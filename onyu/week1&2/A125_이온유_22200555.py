import sys
#sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
arr = []
for i in range(n):
    k = int(input())
    arr.append(k)
arr.sort(reverse=True)
for i in range(1, n+1):
    arr[i-1] *= i
print(max(arr))
