import sys
import re
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

s = input().strip()
word = input().strip()

arr = re.findall(word, s)
print(len(arr))