def printLine(num):
    for i in range(1, num+1):
        print(i, end=" ")
    print("")

my_num = int(input())

for i in range(1, my_num+1):
    printLine(i)

for i in range(1, my_num+1):
    printLine(my_num+1-i)