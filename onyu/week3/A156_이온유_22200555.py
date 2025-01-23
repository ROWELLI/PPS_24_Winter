import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n, m = map(int, input().split())
tree = list(map(int, input().split()))

start = 0
end = max(tree)
while start <= end:
    mid = (start+end)//2
    take_home = 0
    for i in tree:
        if i-mid > 0:
            take_home += i-mid
    if take_home >= m:
        start = mid+1
        ans = mid
    else:
        end = mid-1
print(ans)
