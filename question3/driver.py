import psycopg2
import json

def execute_query(connection_string, query):
  """
    Pleasse provide connection_string in the format 
    "dbname=mydatabase user=myuser password=mypassword host=myhost port=myport"
  """
  try:
    # Create a connection to the PostgreSQL database
    conn = psycopg2.connect(connection_string)
    cur = conn.cursor()
    # Execute the query
    cur.execute(query)
  except (Exception, psycopg2.DatabaseError) as error:
    print(error)
  finally:
    # Fetch all rows from the result
    rows = cur.fetchall()

    # Get the column names from the cursor description
    columns = [desc[0] for desc in cur.description]

    # Create a list of dictionaries to hold the data
    data = []
    for row in rows:
        data.append(dict(zip(columns, row)))

    # Create a JSON object with the data and status code
    result = {
        "status_code": 200,
        "data": data
    }

    # Convert the result to a JSON string
    json_result = json.dumps(result)

    # Close the cursor and connection
    cur.close()
    conn.close()

    # Return the JSON string
    return json_result
