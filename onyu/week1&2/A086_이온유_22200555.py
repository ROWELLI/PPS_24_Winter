import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

m, n = map(int, input().split())
num_str=''
arr = {}

for i in range(m, n+1):
    num_str = ''
    for j in range(len(str(i))):
        i = str(i)
        if i[j] == '0':
            num_str += 'zero '
        elif i[j] == '1':
            num_str+='one '
        elif i[j] == '2':
            num_str += 'two '
        elif i[j] == '3':
            num_str += 'three '
        elif i[j] == '4':
            num_str += 'four '
        elif i[j] == '5':
            num_str += 'five '
        elif i[j] == '6':
            num_str += 'six '
        elif i[j] == '7':
            num_str += 'seven '
        elif i[j] == '8':
            num_str += 'eight '
        elif i[j] == '9':
            num_str += 'nine '
    arr[i] = num_str
arr_sort = sorted(arr.items(), key=lambda x: x[1])

count = 0

for i in range(len(arr_sort)):
    if count % 10 == 9:
        print(arr_sort[i][0], end='\n')
    else:
        print(arr_sort[i][0], end=' ')
    count += 1
        