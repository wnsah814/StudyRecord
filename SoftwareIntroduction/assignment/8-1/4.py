def recursiveF(a):
    if a == 0:
        return 0
    else:
        return a + recursiveF(a-1)

num = int(input())
print(recursiveF(num))