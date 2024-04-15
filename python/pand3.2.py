import pandas as pd

# Creating dataframe from CSV file
df_csv = pd.read_csv('file.csv')
print("First column name in CSV dataframe:", df_csv.columns[0])

# Creating dataframe from Excel file
df_excel = pd.read_excel('file.xlsx')
print("First column name in Excel dataframe:", df_excel.columns[0])
