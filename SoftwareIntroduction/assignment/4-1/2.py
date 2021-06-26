def sum(a, b):
    return a + b

def sub(a, b):
    return a - b 

def mul(a, b):
    return a * b

def div(a, b):
    return a / b

def mod(a, b):
    return a % b

num1 = int(input())
num2 = int(input())

print("sum : " + str(sum(num1, num2)))
print("difference : " + str(sub(num1, num2)))
print("product : " + str(mul(num1, num2)))
print("division : " + str(div(num1, num2)))
print("remainder : " + str(mod(num1, num2)))
print("completed")
  

