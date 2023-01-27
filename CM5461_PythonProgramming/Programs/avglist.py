# Write a program to take list as input from user and and print out
# the average of all elements in list Note: Take number of elements as input

num_list = []
num = int(input("Enter the number of elements in list: "))

for i in range(num):
    num_list.append(int(input("Enter the element: ")))

mean = sum(num_list)/num

print("The average of all elements in list is: ", mean)
