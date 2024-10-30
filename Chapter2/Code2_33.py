mylist = ["blue", "red", "green"]
print(mylist)  
# Output: ['blue', 'red', 'green']
print(mylist[0])  
# Output: blue
mylist[2] = "yellow"
print(mylist)
# Output: ['blue', 'red', 'yellow']
mylist.append("orange")
print(mylist)
# Output: ['blue', 'red', 'yellow', 'orange']
mylist.remove("yellow")
print(mylist)
# Output: ['blue', 'red', 'orange']
mylist.sort()
print(mylist)
# Output: ['blue', 'orange', 'red']
