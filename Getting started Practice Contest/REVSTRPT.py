n = int(input())
pattern = ''
j = n
while n > 0:
    i = 0
    pattern += '*'
    space = ''
    n -= 1
    while n > i:
        i += 1
        space += ' '
    print(space + pattern)