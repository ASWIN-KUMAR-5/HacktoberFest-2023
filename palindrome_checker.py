def is_palindrome(s):
    cleaned_string = ''.join(s.split()).lower()
    return cleaned_string == cleaned_string[::-1]


input_string = input("Enter a String:")
if is_palindrome(input_string):
    print("palindrome")
else:
    print('not a palindrome')
