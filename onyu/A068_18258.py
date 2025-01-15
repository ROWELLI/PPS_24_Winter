import sys
from collections import deque
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

arr = deque()
n = int(input())

for i in range(n):
    cmd = input().strip()
    if 'push' in cmd:
        push, value = map(str, cmd.split())
        arr.append(value)
    elif cmd == 'front':
        if len(arr) > 0:
            print(''.join(arr[0]))
        else:
            print(-1)
    elif cmd == 'back':
        if len(arr) > 0:
            print(''.join(arr[len(arr)-1]))
        else:
            print(-1)
    elif cmd == 'size':
        print(len(arr))
    elif cmd == 'empty':
        if len(arr) == 0:
            print(1)
        else:
            print(0)
    elif cmd == 'pop':
        if len(arr) > 0:
            print(''.join(arr.popleft()))
        else:
            print(-1)
