numbers = inpunt("I'm a calculator program...give me two numbers \n")
numbers= list(map(float,numbers.split()))
choice = input("let me know if you want to perform a sum, difference, multiplication or division")
match  choice:
    case "sum":
        print("the result of the sum is ", a+b)
   case "difference":
       print("the result of the sum is ", a-b)
   case "multiplication":
       print("the result of the sum is ", a*b)
   case "division":
       print("the result of the sum is ", a/b)
