from math import remainder
Number=int(input("Enter a Number"))
Temp=Number
Rev=0
while (Number>0):
    Remainder=(Number%10)
    Rev=Remainder+(Rev*10)
    Number=(Number//10)
if Temp==Rev:
    print(str(Temp)+" is Number is Palindrome")
else:
    print(str(Temp)+" is Number Is Not Palindrome")