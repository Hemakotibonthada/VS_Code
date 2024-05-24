'''for x in range (100):
    print ("the Value Of X Is :  "+ str(x))
    
def square(n):
    return n*n

def sum_squares(x):
    sum = 0
    for n in range (x):
        sum += (n+x)*2
        print (x,n)
    return sum-5

print(sum_squares(10))

Names= ["Hema","Shaker","Venkatesh"]
for name in Names:
    print(name)
   
from operator import length_hint


number=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
sum = 1
length = 0
x=len(number)
for numbers in number:
    sum *= numbers
    length+=1
    print(sum,length)
print(x)
 
i,j=1, 10
while (i<=10):
    while(j>=i):
        print("* "*j)
        j-=1
    i+=1
    '''
for A in range (10):
    for B in range(A,10):
        print("*",end=" ")
    print()