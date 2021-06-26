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

words = {
    "color": "red orange black blue gray".split(),
    "shapes": "circle triangle rectangle square".split()
}

def getRandomWord(wordDict):
    wordKey = random.choice(list(wordDict.keys()))
    wordIndex = random.randint(0, len(wordDict[wordKey])-1)
    return [wordDict[wordKey][wordIndex], wordKey]

def displayBoard(missedLetters, correctLetters, secretWord):
    print(HANGMAN_PICS[len(missedLetters)])
    print()

    print("Missed letters: ",end="")
    for letter in missedLetters:
        print(letter, end=" ")
    print()

    blanks = "_"*len(secretWord)

    for i in range(len(secretWord)):
        if secretWord[i] in correctLetters:
            blanks = blanks[:i] + secretWord[i] + blanks[i+1:]
    for letter in blanks:
        print(letter, end=" ")
    print()

def getGuess(alreadyGuessed):
    while True:
        print("Take a guess")
        guess = input().lower()
        if len(guess) != 1:
            print("Please enter a single letter.") 
        elif guess in alreadyGuessed:
            print("You have already guessed that letter. Choose again.")
        elif guess not in 'abcdefghijklmnopqrstuvwxyz':
            print("Please enter a LETTER")
        else:
            return guess

def playAgain():
    print("Do you want to play again? (yes or no)")
    return input().lower().startswith('y')

print("H A N G M A N")

missedLetters = ""
correctLetters = ""

#secretWord = getRandomWord(words)
#secretKey = secretWord[0]
#secretWord = secretWord[1]
secretWord, secretKey = getRandomWord(words)

gameIsDone = False

while True:
    print("The secret word is in the set: "+secretKey)
    displayBoard(missedLetters, correctLetters, secretWord)
    guess = getGuess(missedLetters + correctLetters)

    if guess in secretWord:
        correctLetters += guess

        foundAllLetters = True

        for i in range(len(secretWord)):
            if secretWord[i] not in correctLetters:
                foundAllLetters = False
                break
        if foundAllLetters:
            print('Yes! The secret word is "'+secretWord+'"! You won')
            gameIsDone = True

    else:
        missedLetters += guess

        if len(missedLetters) == len(HANGMAN_PICS) - 1:
            displayBoard(missedLetters, correctLetters, secretWord)
            print("You have run out of guesses! \nAfter "+str(len(missedLetters)))
            gameIsDone = True
    
    if gameIsDone:
        if playAgain():
            missedLetters = ''
            correctLetters = ''
            gameisDone = False
            secretWord, secretKey = getRandomWord(words)
        else:
            break