gMul = 1

def addTotal(num1):
    sum = 0

    for i in range(num1+1):
        sum += i
    return sum

def mulTotal(num1):
    global gMul
    gob = 1
    for i in range(1, num1+1):
        gob *= i

    gMul = gob


my_num = int(input())

print("addTotal(): "+ str(addTotal(my_num)))
mulTotal(my_num)
print("gMul: "+ str(gMul))