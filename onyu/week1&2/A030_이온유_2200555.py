import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

# 좋-좋 좋-싫 싫-좋 싫-싫

n, s = map(int, input().split())
arr = list(map(float, input().split()))

nowgood = 0
nowbad = 0
good = 0
bad = 0
count = 1

while count <= n:
    if count == 1:
        if s == 1:
            good = 1.0*arr[3]
            bad = 1.0*arr[2]
        else:
            good = 1.0*arr[0]
            bad = 1.0*arr[1]
    else:
        nowgood = good*arr[0] + bad*arr[3]
        nowbad = bad*arr[2] + good*arr[1]
        good = nowgood
        bad = nowbad
    count = count + 1

print(round(int(good*1000)), round(int(bad*1000)))