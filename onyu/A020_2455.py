import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

arr = [0]*4

for i in range(4):
    off, on = map(int, input().split())
    if i == 0:
        arr[i] = on
    arr[i] = arr[i-1] + on - off
print(max(arr))