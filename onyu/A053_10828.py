import sys
import re
#sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
stack = []
for i in range(n):
    cmd = input().strip()
    if 'push' in cmd:
        num = re.findall(r'\d+', cmd)
        stack.append(num[0])
    elif cmd == 'top':
        print(stack[-1] if stack else -1)
    elif cmd == 'size':
        print(len(stack))
    elif cmd == 'empty':
        print(0 if stack else 1)
    elif cmd == 'pop':
        print(stack.pop() if stack else -1)