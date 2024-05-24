from numpy import number


inputString=input("Enter a String: ")
def upper_Case(string):
    A=str.upper(inputString)
    print(A)
    return A
def Number_String(string):
    B=len(inputString)
    print(str(B)+"L")
    return B
def msn_Code(inputString):
    C=len(inputString)
    D=C-4
    E=inputString[D]
    print (E)
    return E
Z=len(inputString)
Lower=["a","b","c","d","e"]
if (inputString<str(number)):
    Number_String(inputString)
elif inputString[Z-3] == "m" and inputString[Z-2] == "s" and inputString[Z-1] == "n" :
    msn_Code(inputString)
elif(inputString.islower()):
    upper_Case(inputString)
else:
    inputString.islower()
    
    print(inputString)