#Meangrades.py
grades = input("Please give me your grades")
grades =grades.split()
grades = list(map(float, grades))
print ("the mean value of your grades is  ", sum(grades)/len(grades))
