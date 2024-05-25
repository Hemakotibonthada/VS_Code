import mysql.connector

# Connect to the MySQL database
connection = mysql.connector.connect(
    host="localhost",
    user="admin",
    password="Hemakoti@003",
    database="hemakoti"
)

# Create a cursor object to interact with the database
cursor = connection.cursor()

# Define the data to be inserted
data = [
    ("John Doe", 25, "john@example.com"),
    ("Jane Smith", 30, "jane@example.com"),
    ("David Johnson", 35, "david@example.com")
]

# Define the INSERT statement
insert_query = "INSERT INTO practice (sn,name, age) VALUES (%s, %s, %s)"

# Loop through the data and execute the INSERT statement for each set of values
for entry in data:
    cursor.execute(insert_query, entry)

# Commit the changes to the database
connection.commit()

# Close the cursor and connection
cursor.close()
connection.close()
