import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

m = int(input())
r = 0
result = 1
for _ in range(m):
    a, b, s = map(int, input().split())
    if s == 1:
        r = 1 if r == 0 else 0
    result = result*b/a
print(r, int(result))