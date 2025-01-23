n = list(map(int, input()))
a = sorted(n, reverse=True)
result = ''.join(map(str, a))
print(result)