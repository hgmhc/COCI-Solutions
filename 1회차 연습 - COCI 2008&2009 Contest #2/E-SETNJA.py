s = input()
x = 1
cnt = 1
for c in s:
    if c == 'L':
        x = 2*x
    elif c == 'R':
        x = 2*x+cnt
    elif c == 'P':
        continue
    else:
        x = 5*x+cnt
        cnt *= 3
print(x)
