'''def Hema(N):
    print("Calling Function By: "+str(N)+ " Value")
    if N<10:
        print("Condition Satisfied: "+ str(N))
        return 1
    return N * Hema(N-1)
    print("Called Value: "+ str(N))
Hema(20)
'''
# Factorial Using Recursion Method
from math import factorial


'''def factorial(n):
    print("Factorial Called With: "+str(n))
    if n<2:
        print("Returning 1")
        return 1
    result= n * factorial (n-1)
    print("Returning " +str(result)+" for factorial of "+ str(n))
    return result
factorial(5)
'''
#addition Of Numbers Using Rec
def sum_positive_numbers(n):
    # The base case is n being smaller than 1
    if n < 1:
        return n

    # The recursive case is adding this number to 
    # the sum of the numbers smaller than this one.
    return n + sum_positive_numbers(n-1)

print(sum_positive_numbers(10)) # Should be 6
print(sum_positive_numbers(500)) # Should be 15