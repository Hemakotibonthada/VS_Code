seconds=int(input("Enter Seconds"))
Hh=(seconds//3600)
Hm=seconds%3600
print(f"Time In Minutes:{Hh}:{(Hm)//60}:{seconds%60}")