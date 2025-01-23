import sys
input = sys.stdin.readline

def vowel_in(a):
    vowels = "aeiou"
    for vowel in vowels:
        if vowel in a:
            return 1

def three_times(a):
    vowels = "aeiou"
    check = 0
    count = 0
    for i in range(len(a)):
        if a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u' :
            count += 1
            check = 0
        else:
            check += 1
            count = 0
        if check == 3 or count == 3:
            return 0    
    return 1

def two_times(a):
    for i in range(len(a)-1):
        if a[i] == a[i+1] and a[i] != 'e' and a[i] != 'o':
            return 0
    return 1

while True:
    arr = input().rstrip()
    if arr == 'end':
        break
    if vowel_in(arr) == 1 and three_times(arr) == 1 and two_times(arr) == 1:
        print('<%s> is acceptable.' %(arr).strip())
    else:
        print('<%s> is not acceptable.' %(arr.strip()))

