# Example array
numbers = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]

# Initialize maximum with the first element
maximum_number = numbers[0]

# Iterate through the list to find the maximum
for number in numbers:
    if number > maximum_number:
        maximum_number = number

print("The maximum number is:", maximum_number)
