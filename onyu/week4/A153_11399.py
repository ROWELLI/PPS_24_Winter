import sys
#sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
p = list(map(int, input().split()))
p_sort = sorted(p)
each_time = 0
total_time = 0
for i in p_sort:
    each_time += i
    total_time += each_time
print(total_time)
