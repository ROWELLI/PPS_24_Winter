import sys
# sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

a = int(input())
b = int(input())
c = int(input())

value = str(a*b*c)
arr = [0]*10

for i in range(len(value)):
    arr[int(value[i])] += 1
print('\n'.join(str(arr)[1:-1].split(', ')))