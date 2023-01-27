# Understanding the Mutable and Immutable Datatypes in Python
# Mutable Datatypes - List, Set and Dictionaries
# Immutable DataTypes - Numbers(int,float,long,bool,..) Strings, frozensets,tuple

num1 = 245

print(f"The Valude of num1 : {num1} and type{type(num1)} id: {hex(id(num1))}")

# The reassignment doesn’t change the value of the first integer
# object. It just reassigns the reference.

num1 = 864
print("After Reassign: ")
print(f"The Valude of num1 : {num1} and type{type(num1)} id: {hex(id(num1))}")
