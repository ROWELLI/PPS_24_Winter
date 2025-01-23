import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
num_card = list(map(int, input().split()))
result = []
num_card.sort()

m = int(input())
check_card = list(map(int, input().split()))
for target in check_card:
    start = 0
    end = n-1
    check = 0
    while start <= end:
        mid = (start+end)//2
        if num_card[mid] >= target:
            if num_card[mid] == target:
                check = 1
            end = mid-1
        else:
            start = mid+1
    if check == 1:
        result.append(1)
    else:
        result.append(0)
print(' '.join(map(str, result)))
