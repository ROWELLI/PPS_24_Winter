import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())

for _ in range(n):
    s = input()
    arr = [0]*91
    sum = 0
    for i in range(len(s)):
        arr[ord(s[i])] += 1
    for i in range(65, 91):
        if arr[i] == 0:
            sum += i
    print(sum)