#Code 2.58 
import math
data = list (map(float,open("data2.dat").read().split()))
#just to verify that data contains a list of real values
for number in data:
    print(number)
mean = sum(data)/len(data)
squaredeviation = []
for a in data:
    squaredeviation.append((a-mean)**2)
rms = math.sqrt(sum(squaredeviation)/len(squaredeviation))
print("the mean values of read data is ", mean)
print("the standard deviation of data is ", rms)
