import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
arr = [0]*26
result = []
check = 0

for i in range(n):
    s = input()
    arr[ord(s[0])-ord('a')] += 1
for i in range(26):
    if arr[i] >= 5:
        check = 1
        result.append(chr(i+ord('a')))
if check == 1:
    print(''.join(result))
else:
    print('PREDAJA')