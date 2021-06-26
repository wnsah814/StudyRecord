def programDescription():
    print("* Number of divisors *")

def getNumOfDivisors(number):
    tot = 0
    for i in range(1, number+1):
        if(number % i == 0):
            tot += 1
    return tot

programDescription()
print("Type the first number:")
num1 = int(input())
print("Type the second number:")
num2 = int(input())

print("Number of divisors of the first number is "+ str(getNumOfDivisors(num1)))
print("Number of divisors of the second number is "+ str(getNumOfDivisors(num2)))