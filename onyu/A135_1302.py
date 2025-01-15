import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
dic = {}
for i in range(n):
    s = input().strip()
    if s in dic.keys():
        dic[s] += 1
    else:
        dic[s] = 0
print(max(sorted(dic), key=lambda x:dic[x]))