import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
result = 0

for i in range(n):
    h = int(input())
    if i == 0:
        result = h
    else:
        result = result+h-1
print(result)