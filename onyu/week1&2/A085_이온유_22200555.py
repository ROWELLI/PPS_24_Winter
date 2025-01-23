import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
arr = []

for _ in range(n):
    s = input().strip()
    sum = 0
    for i in range(len(s)):
        if s[i].isdigit():
            sum += int(s[i])
    arr.append((sum, s))
arr.sort(key=lambda x:x[1])
arr.sort(key=lambda x:x[0])
arr.sort(key=lambda x:len(x[1]))
for i in range(n):
    print(arr[i][1])
