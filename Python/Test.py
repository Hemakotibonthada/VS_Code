import arrow 
date=arrow.get("2023-07-26", "YYYY-MM-DD")
print(date.shift(weeks=+6).format("MMM DD YYYY"))