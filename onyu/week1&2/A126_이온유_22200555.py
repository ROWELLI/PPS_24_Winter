import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
count = 0

for i in range(1, n+1):
    s = str(i)
    j = 0
    arr = []
    if len(s) == 1 or len(s) == 2:
        count += 1
    else:
        while j+1 <= len(s)-1:
           arr.append(int(s[j+1])-int(s[j]))
           j+=1
        if min(arr) == max(arr):
            count += 1
print(count)