import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

dic = {}
sum = 0

for i in range(8):
    n = int(input())
    dic[i+1] = n

dic = sorted(dic.items(), key=lambda item: item[1], reverse=True)
dic = list(dic)[0:5]
dic = sorted(dic)

for i in dic:
    sum += i[1]
print(sum)
for i in dic:
    print(i[0], end=" ")