num = int(input())
i = 0
j = 0

while(i<num):
    i += 1
    while(j<i):
        j += 1
        print("* ", end='')
    j = 0
    print("")
