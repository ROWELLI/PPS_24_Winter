import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

dic = {}

for i in arr:
    if i not in dic:
        dic[i] = 0

dic_sort = sorted(dic)
num = arr[0]
count = 0

for i in dic_sort:
    if num != i:
        dic[i] = count
        num = i
    count += 1
result = []
for i in arr:
    result.append(dic[i])
print(' '.join(map(str, result)))
