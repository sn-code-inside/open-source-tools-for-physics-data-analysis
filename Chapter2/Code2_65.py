import numpy as np
data = np.loadtxt("test.dat")
histo = np.histogram(data,bins=50,range = (data.max(),data.min()))
print("first array contains the histogram absolute frequency")
print(data[0])
print("the second array contains the edges of histogram bins")
print(data[1])
