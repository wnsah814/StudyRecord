(a,b,c) = map(int, input().split())

max = 0
min = 0 

if a>b:
    if a>c:
        max = a
        if b>c:
            min = c
        else:
            min = b
    else:
        max = c
        min = b

else:
    if b>c:
        max = b
        if a>c:
            min = c
        else:
            min = a
    else:
        max = c
        min = a

print("min:", min)
print("max:", max)
