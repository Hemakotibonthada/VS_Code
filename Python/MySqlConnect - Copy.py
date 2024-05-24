import mysql.connector

# Establish connection
conn = mysql.connector.connect(
    host="localhost",
    user="admin",
    password="Hemakoti@003",
    database="hemakoti"
)

# Check if the connection is successful
if conn.is_connected():
    print("Connected to MySQL database")

# Perform database operations
# Create a cursor object
cursor = conn.cursor()

# Execute a SQL query to retrieve column values
query = "SELECT name, id, mail FROM friends"
cursor.execute(query)

# Fetch all the rows returned by the query
rows = cursor.fetchall()

# Process the retrieved data
for row in rows:
    column1_value = row[0]
    column2_value = row[1]
    column3_value = row[2]
    # Do something with the column values
    print(column3_value)
    #Gmail(column3_value)

# Close the cursor and connection
cursor.close()
conn.close()
    