import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

s = input()
count = 0

for i in range(len(s)-1):
    if ord(s[i]) <= ord('C'):
        count += 3
    elif ord(s[i]) <= ord('F'):
        count += 4
    elif ord(s[i]) <= ord('I'):
        count += 5
    elif ord(s[i]) <= ord('L'):
        count += 6
    elif ord(s[i]) <= ord('O'):
        count += 7
    elif ord(s[i]) <= ord('S'):
        count += 8
    elif ord(s[i]) <= ord('V'):
        count += 9
    else:
        count += 10
print(count)