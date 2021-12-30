n = int(input())
list_input = list(map(int,input().strip().split()))[:n]
list_input.reverse()

for item in list_input:
    print(item, end=' ')