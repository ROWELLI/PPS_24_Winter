import sys
#sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n, k = map(int, input().split())
a = []
for i in range(n):
    coin = int(input())
    if coin <= k:
        a.append(coin)
a.sort(reverse=True)
count = 0
for i in range(len(a)):
    if k // a[i] > 0:
        count += k//a[i]
        k -= a[i]*(k//a[i])        
print(count)
