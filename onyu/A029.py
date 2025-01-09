import sys
sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

n = input()
arr = [0]*10

for j in range(len(n)):
    if n[j] == '6' or n[j] == '9':
        if arr[6] >= arr[9]:
            arr[9] += 1
        else:
            arr[6] += 1 
    else:    
        arr[int(n[j])]+=1

print(max(arr))