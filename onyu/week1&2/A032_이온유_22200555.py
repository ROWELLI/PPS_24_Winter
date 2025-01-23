import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

t = int(input())

for _ in range(t):
    dp = [i for i in range(1, 15)]
    k = int(input())
    n = int(input())
    for _ in range(k):
        for i in range(n-1):
            dp[i+1] = dp[i+1]+dp[i]
    print(dp[n-1])