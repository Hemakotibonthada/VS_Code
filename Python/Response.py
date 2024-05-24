A=input("If You Are Human Type Yes: Else No")
B=(A.strip()).lower()
if B=="yes":
    print("Finally Your Answer Is: "+B)
elif(input("Are You Male?").strip()).lower()=="yes":
    print("Your Answer Is Yes")
else:
    print("Your Answer is: No ")