#!/usr/bin/python3

def is_palindrome(num):
    return str(num) == str(num)[::-1]

big_palindrome = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        result = i * j
        if is_palindrome(result) and result > big_palindrome:
            big_palindrome = result

with open("102-result", "w") as file:
    file.write(str(big_palindrome))

print(big_palindrome)
