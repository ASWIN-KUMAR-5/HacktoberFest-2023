
numbers = list(input("Enter the lsit elements separated by comma:").split(','))

maximum_number = numbers[0]

for number in numbers:
    if number > maximum_number:
        maximum_number = number

print("The maximum number is:", maximum_number)

