import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))
print(sum(arr)-max(arr))