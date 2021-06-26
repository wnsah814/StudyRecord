score = {}

def newStu():
    global score
    stu, sco = input().split()
    score[stu] = sco  

newStu()
newStu()
newStu()
newStu()
newStu()

print("Which student's score?")
student_input = input()

if(student_input in score):
    print(student_input+"'s score: "+score[student_input])
else:
    print(student_input+" is not in this database.")