# Write a python program to find reverse of number in python

num = int(input("Enter a number to reverse: "))
rev = 0

while num > 0:
    rem = num % 10
    num = num//10
    rev = rev*10+rem

print("The Reverse of Number is : ", rev)
