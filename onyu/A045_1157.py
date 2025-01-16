import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

s = input()
s = s.lower()
arr = [0]*26
count = 0

for i in range(len(s)-1):
    arr[ord(s[i])-ord('a')] += 1
max_value = max(arr)
for i in range(26):
    if max_value == arr[i]:
        count += 1
if(count > 1):
    print('?')
else:
    print(chr(arr.index(max_value)+ord('A')))