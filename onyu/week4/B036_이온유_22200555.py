import sys
#sys.stdin = open("input.txt", "r")
input = sys.stdin.readline

cal = input()
m = ''
p = ''
plus = []
minus = []
k = 0
check = 0
while not k == len(cal):
    if cal[k].isdigit() and check == 0:
        p += cal[k]
    elif cal[k].isdigit() and check == 1:
        m += cal[k]
    elif cal[k] == '-':
        if len(p)>0:
            plus.append(int(p))
            p = ''
        if check == 1:
            minus.append(int(m))
            m = ''
        check = 1
    else:
        if check == 0:
            plus.append(int(p))
            p = ''
        else:
            minus.append(int(m))
            m = ''
    k+=1
if len(p)>0:
    plus.append(int(p))
if len(m)>0:
    minus.append(int(m))
print(sum(plus)-sum(minus))
