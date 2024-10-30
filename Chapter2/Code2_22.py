#Meangrades.py
name = input("Please, tell me how to reach the file, path plus name, or name: ")
grades = list(map(float, open(name).read().split()))
print ("the mean value of your grades is  ", sum(grades)/len(grades))
