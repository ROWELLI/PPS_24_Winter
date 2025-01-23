n = int(input())
a = []
for _ in range(n):
    id = list(map(str, input().split()))
    a.append(id)
b = sorted(a, key=lambda x: int(x[0]))
for i in range(n):
    result = ' '.join(map(str, b[i]))
    print(result)