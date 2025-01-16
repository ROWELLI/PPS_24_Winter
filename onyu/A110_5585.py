import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

count = 0
n = 1000 - int(input())
arr = [500, 100, 50, 10, 5, 1]
for i in range(6):
    count += n//arr[i]
    n = n%arr[i]
print(count)