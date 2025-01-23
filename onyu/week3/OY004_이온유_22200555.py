import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
arr = []
result = []
arr_sum = []

for _ in range(n):
    arr.append(int(input()))
arr.sort()

for i in arr:
    for j in arr:
        arr_sum.append(i+j)
arr_sum.sort()

for i in range(n):
    # print(arr[i])
    for j in range(i+1, n):
        start = 0
        end = len(arr_sum)-1
        while start <= end:
            mid = (start + end)//2
            sum = arr[i] + arr_sum[mid]
            # print(f'{arr[j]}: {arr[i]}+{arr_sum[mid]}')
            if sum > arr[j]:
                end = mid - 1
            elif sum < arr[j]:
                start = mid + 1
            else:
                result.append(arr[j])
                break
print(max(result))
