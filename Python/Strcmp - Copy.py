X=input("Enter String 1")
Y=input("Enter String 2")
x=[]
y=[]
x[:0]=X
y[:0]=Y
x=sorted(x)
y=sorted(y)
if x==y:
    print('yes')
else:
    print('No')
