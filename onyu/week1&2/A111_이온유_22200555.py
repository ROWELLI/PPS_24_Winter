import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    k = int(input())
    print(2**k-1)