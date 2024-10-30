import math
coeff = input("please, tell me the coefficients of 2nd order equation ax^2+bx+c \n")
coeff = list(map(float,coeff.split()))
delta = coeff[1]*coeff[1] - 4*coeff[0]*coeff[2];
if delta > 0 :
    print("the first root is equal to ",(-coeff[1] + math.sqrt(delta))/(2*coeff[0]))
    print("the second root is equal to ",(-coeff[1] - math.sqrt(delta))/(2*coeff[0]))
    if delta == 0:
        print("the only solution is ", -b/(2*a))
    else :
        print("the equation does not have any real solutions")
