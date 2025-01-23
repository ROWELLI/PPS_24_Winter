import sys
input = sys.stdin.readline

while True:
    arr = input()
    if arr.strip() == '.' and len(arr)==2:
        break
    stack = []
    check = 0
    for i in range(len(arr)):
        if ord(arr[i]) == 40 or ord(arr[i]) == 41 or ord(arr[i]) == 91 or ord(arr[i]) == 93:
            if (len(stack) != 0 and ord(arr[i]) == ord(stack[-1])+1) or (len(stack) != 0 and ord(arr[i]) == ord(stack[-1])+2):
                stack.pop()
            elif len(stack) == 0 or ord(arr[i]) != ord(stack[-1])+1 or ord(arr[i]) != ord(stack[-1])+2:
                stack.append(arr[i])
        else: 
            check += 1
    if len(stack) == 0 or check == len(arr)+1:
        print('yes')
    else:
        print('no')   
            
