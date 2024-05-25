import mysql.connector

# Connect to the MySQL database
connection = mysql.connector.connect(
    host="localhost",
    user="Hemakoti",
    password="Hemakoti@003",
    database="hemakoti"
)

# Create a cursor object to interact with the database
cursor = connection.cursor()

# Construct the SQL query with the IN condition
query = "SELECT * FROM contacts WHERE name IN (%s)"
values = ("Hema")  # Replace value1, value2, value3 with your specific values

# Execute the query
cursor.execute(query, values)

# Fetch the result set
result = cursor.fetchall()

# Process the result set
for row in result:
    # Access row values using row[column_index]
    value1 = row[0]
    value2 = row[1]
    # Do something with the retrieved values

# Close the cursor and connection
cursor.close()
connection.close()
