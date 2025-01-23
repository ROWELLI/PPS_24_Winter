import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

s = input()
for i in range(len(s)-1):
    if ord(s[i]) <= ord('C'):
        print(chr(ord(s[i])+23), end='')
    else:
        print(chr(ord(s[i])-3), end='')