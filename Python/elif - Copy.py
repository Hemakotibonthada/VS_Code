#number=int(input())
def number_group(number):
  if number>0:
    return "Positive"
  elif number<0:
    return "Negative"
  else:
    return 0

print(number_group(10)) #Should be Positive
print(number_group(0)) #Should be Zero
print(number_group(-5)) #Should be Negative