import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

arr = [0]*42
count = 0

for _ in range(10):
    n = int(input())
    arr[n%42] += 1
for num in arr:
    if num > 0:
        count += 1
print(count)