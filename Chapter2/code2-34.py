# Creating a dictionary
my_dict_func = dict(physical_quantity = "mass", value = 30, unit = "kg")
print(my_dict_func)
# Output: {'physical_quantity': 'mass', 'value': 30, 'unit': 'kg'}
￼
# Accessing values
print(my_dict_func["unit"])  
# Output: 30
￼
# Adding a new key-value pair
my_dict_func["measurement(s)"] = 10
￼
# Updating an existing key-value pair
my_dict_func["unit"] = "g"
￼
print(my_dict_func)
# Output: {{'physical_quantity': 'mass', 'value': 30, 'unit': 'g', 'measurement(s)': 10}
￼
# Removing a key-value pair
del my_dict_func["measurement(s)"]
￼
# Iterating through key-value pairs
for key, value in my_dict_func.items():
    print(f"{key}: {value}")
# Output: physical_quantity: mass
#         value: 30
#         unit: g
