import sys
import re
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

s = input().strip()
arr = ''
count = 0
len_count = 0
words = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

for i in range(len(words)):
    word = re.findall(words[i], s)
    count += len(word)
    len_count += len(words[i])*len(word)
    if words[i] == 'z=':
        word = re.findall('dz=', s)
        count -= len(word)
        len_count -= 2*len(word)
print(count+len(s)-len_count)