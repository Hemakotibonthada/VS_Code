import mysql.connector
import smtplib
from email.mime.text import MIMEText

# Establish connection to MySQL
conn = mysql.connector.connect(
    host="localhost",
    user="admin",
    password="Hemakoti@003",
    database="hemakoti"
)

# Check if the connection is successful
if conn.is_connected():
    print("Connected to MySQL database")

# Create a cursor object
cursor = conn.cursor()

# Execute a SQL query to retrieve column values
query = "SELECT name, id, mail FROM friends"
cursor.execute(query)

# Fetch all the rows returned by the query
rows = cursor.fetchall()

# Close the cursor and connection
cursor.close()
conn.close()

# Process the fetched data and compose email content
email_content = ""
for row in rows:
    column1_value = row[0]
    column2_value = row[1]
    column3_value = row[2]
    # Build the email content using the fetched data
    email_content += f"Column 1: {column1_value}\n"
    email_content += f"Column 2: {column2_value}\n"
    email_content += f"Column 3: {column3_value}\n"
    email_content += "\n"

# Compose the email message
message = MIMEText(email_content)
message['Subject'] = 'Data from MySQL database'
message['From'] = 'hkb096@gmail.com'
message['To'] = column3_value

# Send the email using Gmail SMTP server
try:
    server = smtplib.SMTP('smtp.gmail.com', 587)
    server.starttls()
    server.login('hkb096@gmail.com', 'Arjun@Password@003')
    server.sendmail('hkb096@gmail.com', column3_value, message.as_string())
    server.quit()
    print("Email sent successfully")
except Exception as e:
    print("Failed to send email:", str(e))
