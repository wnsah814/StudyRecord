import random

guessTaken = 0

print("Hello! What is your name?")
myName = input()

number = random.randint(1, 20)

print("Well, "+myName+", I am thinking of a number between 1 and 20")

while guessTaken < 6:
    print("Take a guess")

    guess = int(input())

    guessTaken = guessTaken + 1

    if guess < number:
        print("Your guess is too low")

    elif guess > number:
        print("Your guess is too high")

    else:
        break

if guess == number:
    print("Good job, "+myName+"! You guessed my number in "+str(guessTaken)+" guesses!")
else:
    print("Nope. The number I was thinking of was "+str(number))
