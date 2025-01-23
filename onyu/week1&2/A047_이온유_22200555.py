import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

s = input()
for i in range(len(s)-1):
    if i!=0 and i%10 == 0:
        print()
    print(s[i], end='')