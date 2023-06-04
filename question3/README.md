# Bitnine
This repository detailed the attempted questions for the internship/collaborator role on the development of Apache Age

For Question 3, 

I implemented this using Python. I haven't built a driver before. However, I believe the script can be used to achieve the desire result of the output json string format if the followin steps are taken

1. Pip install the psycopg2 module in your environment
2. Provide the necessary database credential in the connection string format using the keyword relationship
i.e connection_string= "dbname=mydatabase user=myuser password=mypassword host=myhost port=myport"
3. provide the select query to retrieve data from the user_table 
i.e query= "SELECT * FROM public.user_table"
4. call the execute_query function with the connection string and query argument to retrieve the result as JSON

Note: The provision of the connection string is based on simple PostgreSQL DB, for other advance connection such as SSH tunnel and PEM file method, I will build the function differently to support this.

