def printStarDia(n):
    for i in range(1, n+1):
        for j in range(1, n+1-i):
            print(" ", end='')
        for j in range(1, i+1):
            print("* ", end='')
        print()

    for i in range(1, n+1):
        for j in range(1, i):
            print(" ", end='')
        for j in range(1, n+2-i):
            print("* ", end='')
        print()


num = int(input())

printStarDia(num)
