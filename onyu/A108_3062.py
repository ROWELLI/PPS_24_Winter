import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
for _ in range(n):
    s = int(input())
    rn = int(str(s)[::-1])
    result = str(s+rn)
    result_reverse = ''.join(reversed(result))
    if result == result_reverse:
        print('YES')
    else:
        print('NO')