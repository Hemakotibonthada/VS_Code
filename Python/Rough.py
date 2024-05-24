a= int (input())
b=int (input())
c=0
for i in range (a,b):
    i=str(i)
    if (("2"in i) and ("3" in i)) or (("4" in i) and ("5" in i)) and (("6" in i) and ("7" in i)):
        c+=int(i)
c=c%998244353
print(c)