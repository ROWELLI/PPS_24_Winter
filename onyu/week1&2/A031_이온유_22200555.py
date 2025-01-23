import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n, m = map(int, input().split())
c = n*m
count = 0

def divide(num):
    global count
    if num != 1:
        count += 1
        if num%2!= 0:
            divide(num//2+1)
            divide(num//2)
        else:
            divide(num//2)
            divide(num//2)
divide(c)
print(count)
