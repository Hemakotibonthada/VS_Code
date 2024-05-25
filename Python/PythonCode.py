Jack={2,1,3,4,5}
jack=list(Jack)
n = len(jack)
if n%2 != 0:
    m=int((n-1)/2)
    print(jack[m])
else:
    print(-1)