import random

numbers = []
max = 0

for i in range(100):
    numbers.append(random.randint(1, 1000))

for number in numbers:
    print(number, end=" ")
    if number>max:
        max = number

print("\n")
print("max value: "+str(max))