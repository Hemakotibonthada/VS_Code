#n=map(int(input("Enter Number")))
k=0
a=int(input("Number of elements in the array: "))
n=list(map(int, input("elements of array: ").strip().split()))
for i in range(0,a):
    if (n[i]>=k):
        k=n[i]
print("The Biggest Number you Entered is: "+ str(k))    
