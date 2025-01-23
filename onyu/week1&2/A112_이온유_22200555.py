import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n, m = map(int, input().split())
price = []
result = 0

for i in range(m):
    many, one = map(int, input().split())
    price.append((many, one))
if min(price, key=lambda x:x[0])[0] < 6*min(price, key=lambda x:x[1])[1]:
    result = n//6*min(price, key=lambda x:x[0])[0]
    n = n%6
    result += min(n*min(price, key=lambda x:x[1])[1], min(price, key=lambda x:x[0])[0])
else:
    result += n*min(price, key=lambda x:x[1])[1]

print(result)
