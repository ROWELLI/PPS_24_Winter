import sys
#sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

k, n = map(int, input().split())
l = []
for _ in range(k):
    l.append(int(input()))

start = 1
end = max(l)

while start <= end:
    mid = (start+end)//2
    count = 0
    for i in l:
        count += i//mid
    if count >= n:
        start = mid + 1
        ans = mid
    else:
        end = mid - 1
print(ans)