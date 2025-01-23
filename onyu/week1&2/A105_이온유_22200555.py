import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
count = 0
k=1
check = 0

while True:
    count = count + k
    if count > n:
        break
    k+=1
    check += 1
    if check % 2==0:
        up = check
        down = 1
    else:
        up = 1
        down = check

for i in range(n-(count-k)):
    if check%2==0 and i == 0:
        up = check+1
        down = 1
    elif check%2!=0 and i == 0:
        up = 1
        down = check+1
    elif check%2==0:
        up-=1
        down+=1
    elif check%2!=0:
        up+=1
        down-=1
print(f'{up}/{down}')