import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
card = list(map(int, input().split()))
m = int(input())
num_set = list(map(int, input().split()))
card.sort()
result = []
# print(card)

dic = {}

for i in range(n):
    if card[i] in dic:
        dic[card[i]] += 1
    else:
        dic[card[i]] = 1

for i in range(m):
    num = num_set[i]
    start = 0
    end = n-1
    check = 0
    while start <= end:
        mid = (start + end)//2
        # print(card)
        # print(f'num: {num} start: {start, card[start]} end: {end, card[end]} mid: {mid, card[mid]}')
        if card[mid] <= num:
            start = mid+1
            if card[mid] == num:
                check = 1
        else:
            end = mid-1
    if check == 1:
        result.append(dic[num])
    else:
        result.append(0)
print(' '.join(map(str, result)))
