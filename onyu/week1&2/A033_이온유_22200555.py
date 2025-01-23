import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

arr = [0]*5

for i in range(5):
    arr[i] = sum(list(map(int, input().split())))
print(arr.index(max(arr))+1, max(arr))