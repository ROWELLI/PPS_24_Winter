import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

s = input()
arr = []
word = []

for i in range(len(s)-1):
    word=[]
    for j in range(i, len(s)-1):
        word.append(s[j])
    arr.append(''.join(word))
print('\n'.join(sorted(arr)))