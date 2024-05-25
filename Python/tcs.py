n=int(input("Enter the size of list: "))
list1=[]
for i in range (n):
    list1.append(int(input("Enter Elements in list: ")))
m,o=0,0
for j in list1:
    if m<=j:
        m,o=j,j
    if o>=j:
        o=j
sub=m-o
for i in range(sub):
    list1[n:]=list1[0:]
    list1[0:1]=list1[1:2]
print(list1)

'''def shift_list():
    size = int(input("Enter the size of the list: "))
    elements = list(map(int, input("Enter the elements of the list (space-separated): ").split()))
    subtraction = max(elements) - min(elements)
    for _ in range(subtraction):
        first_element = elements.pop(0)
        elements.append(first_element)

    print("Resulting list after shifting:", elements)

shift_list()
'''
