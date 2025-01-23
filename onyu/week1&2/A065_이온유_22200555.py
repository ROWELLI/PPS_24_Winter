n = int(input())
c = []
result = []
for _ in range(n):
    coordinate = list(map(int, input().split()))
    c.append(coordinate)
s = sorted(c)
for coord in s:
    print(f'{coord[0]} {coord[1]}')