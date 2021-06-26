import random

HANGMAN_PICS = ['''
    +---+
        |
        |
        |
       === ''', '''
    +---+
    O   |
        |
        |
       === ''', '''
    +---+
    O   |
    |   |
        |
       === ''', '''
    +---+
    O   |
   /|   |
        |
       === ''', '''
    +---+
    O   |
   /|\  |
        |
       === ''', '''
    +---+
    O   |
   /|\  |
   /    |
       === ''', '''
    +---+
    O   |
   /|\  |
   / \  |
       === ''' 
]

words = 'genius ricecake eunbi junmo budezzigye'.split()

def getRandomWord(wordList):
    wordIndex = random.randint(0, len(wordList)-1)
    return wordList[wordIndex]

def displayBoard(missedLetters, correctLetters, secretWord):
    print(HANGMAN_PICS[len(missedLetters)])
    print()

    print('Missed letters:', end='')
    for letter in missedLetters:
        print(letter, end=' ')
    print()

    blanks = '_' * len(secretWord)

    for i in range(len(secretWord)):
        if secretWord[i] in correctLetters:
            blanks = blanks[:i] + secretWord[i] + blanks[i+1:]

    for letter in blanks:
        print(letter, end=" ")
    print()

def getGuess(alreadyGuessed):
    while True:
        print("Guess a letter.")
        guess = input().lower()
        if len(guess) != 1:
            print("Please enter a single letter")
        elif guess in alreadyGuessed:
            print("You have already guessed that letter. Choose again.")
        elif guess not in 'abcdefghijklmnopqrstuvwxyz':
            print("Please enter a LETER")
        else:
            return guess
        
def playAgian():
    print("Do you want to play agian? (yes or no)")

    return input().lower().startswith('y')

print('H A N G M A N')
missedLetters = ''
correctLetters = ''
secretWord = getRandomWord(words)
gameIsDone = False

while True:
    displayBoard(missedLetters, correctLetters, secretWord)

    guess = getGuess(missedLetters + correctLetters)

    if guess in secretWord:
        correctLetters = correctLetters + guess

        foundAllLetters = True
        for i in range(len(secretWord)):
            if secretWord[i] not in correctLetters:
                foundAllLetters = False
                break
        if foundAllLetters:
            print('Yes! The secret word is "' + secretWord + '"! You have won!')
    else:
        missedLetters = missedLetters + guess

        if len(missedLetters) == len(HANGMAN_PICS) -1:
            displayBoard(missedLetters, correctLetters, secretWord)
            print("You have run out of guesses! \nAfter "+str(len(missedLetters)))
            gameIsDone = True

    if gameIsDone:
        if playAgian():
            missedLetters = ''
            correctLetters = ''
            gameIsDone = False
            secretWord = getRandomWord(words)
        else:
            break
