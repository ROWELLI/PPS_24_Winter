import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    arr = list(map(str, input().split()))
    num = float(arr[0])
    for i in range(1, len(arr)):
        if arr[i] == '@':
            num *= 3
        elif arr[i] == '%':
            num += 5
        elif arr[i] == '#':
            num -= 7
    print("{:.2f}".format(num))