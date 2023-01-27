# Write a program to swap two numbers without using third varable

a = int(input("Enter a Number: "))
b = int(input("Enter b number: "))


# Method 1:
a, b = b, a
print("After swapping: ")
print("a = {} b = {}".format(a, b))

# Method 2:
a = a+b
b = b-a
a = a-b
print("After swapping: ")
print("a = {} b = {}".format(a, b))
