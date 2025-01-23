import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n, m = map(int, input().split())
l = list(map(int, input().split()))

start = max(l)
end = sum(l) # 여기는 더 혼남
while start <= end:
    check = 0
    count = 1
    mid = (start+end)//2
    for i in range(n):
        if check + l[i] > mid:
            count += 1
            check = l[i]
        else:
            check += l[i]

    if count > m:
        start = mid+1
    elif count <= m: #이부분 혼남
        ans = mid
        end = mid-1
print(ans)

