import sys
import statistics
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
arr = []

for i in range(n):
    num = int(input())
    arr.append(num)
print(round(statistics.mean(arr)))
print(statistics.median(arr))
mode = sorted(statistics.multimode(arr))
if len(mode) > 1:
    print(mode[1])
else:
    print(mode[0])
print(max(arr)-min(arr))
