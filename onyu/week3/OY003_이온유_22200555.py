import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

m, n = map(int, input().split())
l = list(map(int, input().split()))
l.sort()

result = 0
start = 1
end = max(l)
count = 0

while start <= end:
    count = 0
    mid = (start+end)//2
    # print(arr[start], arr[end], arr[mid])
    for i in l:
        count += i//mid
    # print(arr[mid], count)
    if count >= m:
        result = mid
        start = mid + 1
    elif count < m:
        end = mid - 1
print(result)
