python = "Python is Amazing"
print(python.lower()) #소문자
print(python.upper()) #대문자
print(python[0].isupper()) #대문자 확인
print(len(python)) #길이
print(python.replace("Python", "Java")) #찾고 바꾸기

index = python.index("n") #글자 위치
print(index)
index = python.index("n", index + 1)
print(index)

print(python.find("n"))
print(python.find("Java")) #-1
# print(python.index("java")) # Error 

print(python.count("n")) #글자가 몇 번 등장하는지