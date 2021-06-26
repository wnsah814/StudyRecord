import random

def getRandomString(leng):
    words = []
    for i in range(leng):
        words.append(chr(random.randint(97, 122)))
    word = ''.join(words)
    return word

def check_try_to_eat(already_tried):
    word = getRandomString(1)
    if word in already_tried:
        return check_try_to_eat(already_tried)
    else:
        already_tried.append(word)
        return word

num = int(input("Input the length of the string : "))
already_tried = []


cheese = getRandomString(num)
original_cheese = cheese

#print(f"Generated Cheese is '{cheese}'")
print("Generated Cheese is '"+cheese+"'")
print("Mouse starts eating!!")

for i in range(10):
    try_to_eat = check_try_to_eat(already_tried)
    #print(f"Start eating '{try_to_eat}'")
    print("Start eating '"+try_to_eat+"'")
    #print(f"Eaten alphabet of cheese : {' '.join(already_tried)}")
    print("Eaten alphabet of cheese : "+' '.join(already_tried))
    #print(f"Original cheese : {original_cheese}")
    print("Original cheese : "+original_cheese)
    for j in range(num):
        if try_to_eat == cheese[j]:
            cheese = cheese[:j] + "_" + cheese[j+1:]
    #print(f"Current cheese status : {cheese}")
    print("Current cheese status : "+cheese)
    print()

    if cheese=="_"*num:
            print("Out of Cheese!")
            break
    
    if i==9:
        print()
        print("Finally remained Cheese Status :")
        
        #print(f"Eaten alphabet of cheese : {' '.join(already_tried)}")
        #print(f"Original cheese : {original_cheese}")
        #print(f"Current cheese status : {cheese}")

        print("Eaten alphabet of cheese : "+' '.join(already_tried))
        print("Original cheese : "+original_cheese)
        print("Current cheese status : "+cheese)
    