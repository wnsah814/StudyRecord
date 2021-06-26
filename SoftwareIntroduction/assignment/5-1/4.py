import random

def getRandomString(leng):
    words = []
    for i in range(leng):
        words.append(chr(random.randint(97, 122)))
    word = ''.join(words)
    return word
    
num = int(input())
print(getRandomString(num))