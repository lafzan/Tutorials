import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import sqlite3
import os
os.system('cls' if os.name == 'nt' else 'clear')
import matplotlib as plt
sales = pd.read_csv('/Users/macbook/Desktop/tutorials/data-analysis/python/freecodecamp/real-life-example/data/sales_data.csv')

"""
print(sales.head())


print(sales.shape)   # rows and columns

print(sales.info())

print(sales.describe())# statistical data of the dataframe  

"""
# NUMERICAL ANALYSIS AND VISUALISATION

"""
print(sales['Unit_Cost'].describe())

print("mean is ", sales['Unit_Cost'].mean())

print("median is ", sales['Unit_Cost'].median())
sales['Unit_Cost'].plot(kind='box', vert=False, figsize=(14,6))
"""

# CATEGORICAL ANALYSIS and VISUALIZATION
"""
print(sales['Age_Group'].value_counts())

sales['Age_Group'].value_counts().plot(kind='pie', figsize=(6,6))

"""
"""
# CORRELATION ANALYSIS

corr = sales.corr()

print(corr)
"""


# DATA WRANGLING

"""

sales['Revenue_per_Age'] = sales['Revenue'] / sales['Customer_Age']

print(sales['Revenue_per_Age'].head())

sales['Calculated_Cost'] = sales['Order_Quantity'] * sales['Unit_Cost']

print(sales['Calculated_Cost'].head())

"""

# DATA FILTERING
"""
print(sales.loc[sales['Age_Group']== 'Adults (35-64)', 'Revenue'].mean())
"""


conn = sqlite3.connect('real-life-example/data/sakila.db')

df = pd.read_sql('''
    SELECT
        rental.rental_id, rental.rental_date, rental.return_date,
        customer.last_name AS customer_lastname,
        store.store_id,
        city.city AS rental_store_city,
        film.title AS film_title, film.rental_duration AS film_rental_duration,
        film.rental_rate AS film_rental_rate, film.replacement_cost AS film_replacement_cost,
        film.rating AS film_rating
    FROM rental
    INNER JOIN customer ON rental.customer_id == customer.customer_id
    INNER JOIN inventory ON rental.inventory_id == inventory.inventory_id
    INNER JOIN store ON inventory.store_id == store.store_id
    INNER JOIN address ON store.address_id == address.address_id
    INNER JOIN city ON address.city_id == city.city_id
    INNER JOIN film ON inventory.film_id == film.film_id
    ;
''', conn, index_col='rental_id', parse_dates=['rental_date', 'return_date'])


print(df.columns)

print(df.shape)
print(df.info())
print(df.describe())

