import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

na, nb = map(int, input().split())
arra = list(map(int, input().split()))
arrb = list(map(int, input().split()))
result = []
arra.sort()
arrb.sort()

for target in arra:
    start = 0
    end = nb-1
    check = 0
    while start <= end:
        mid = (start+end)//2
        if arrb[mid] >= target:
            end = mid-1
            if arrb[mid] == target:
                check = 1
        else:
            start = mid+1
    if check == 0:
        result.append(target)
print(len(result))
if len(result) > 0:
    result.sort()
    print(' '.join(map(str, result)))
