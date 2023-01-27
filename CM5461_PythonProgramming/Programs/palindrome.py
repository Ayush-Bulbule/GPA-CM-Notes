# Program to check palindrome

num = int(input("Enter a Number : "))

temp = num

while temp > 0:
    digit = temp % 10
    temp = temp // 10
    rev = rev * 10 + digit

if temp == rev:
    print("The number is a palindrome")
else:
    print("The number is not a palindrome")
