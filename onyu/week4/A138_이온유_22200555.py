import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    k = 0
    n, m = map(int, input().split())
    queue = list(map(int, input().split()))
    order = {}
    for i in range(n):
        order[i] = queue[i]
    while len(order) != 0:
        if order[next(iter(order))] == max(order.values()):
            k += 1
            if next(iter(order)) == m:
                print(k)
                break
            result = order.pop(next(iter(order)))
            
        else:
            key = next(iter(order))
            value = order.pop(key)
            order.update({key:value})
        
        
        