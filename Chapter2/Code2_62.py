#macro LinSys.py solving the system of linear equations whose coefficients are stored into the file test.dat
#data must be arranged with the variable coefficients and the known term of each equation in a single row and as many rows as the system equations.
import numpy as np
data = np.loadtxt("test.dat")
solutions = np.linalg.solve(data[:,0:len(data[:,0])],data[:,len(data[:,0])])
print(solutions)
