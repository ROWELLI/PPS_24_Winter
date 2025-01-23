import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline


t = int(input())
count = 0

for _ in range(t):
    s = input()
    check = 0
    arr = [0]*26
    for i in range(len(s)-1):
        if arr[ord(s[i])-ord('a')] > 0 and s[i] != s[i-1]:
            check = 1
            break
        arr[ord(s[i])-ord('a')] += 1
    if check == 0:
        count += 1
print(count)