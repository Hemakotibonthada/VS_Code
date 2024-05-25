def Hema(Birth_year, Current_Year, Birth_month, Current_Month , Birth_date,Today):
    Years= Current_Year - Birth_year
    print(Years)
    Months= Current_Month - Birth_month
    print(Months)
    Days= Today - Birth_date
    print(Days)
    Total= (Years*365)+(Months*30)+Days
    return Total
Total_Days=Hema(1998,2022,3,7,9,21)
print(Total_Days)