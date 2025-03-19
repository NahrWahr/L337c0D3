import numpy as np
import re

# Load input.txt
with open("input.txt") as f:
    # Pattern to search in input
    pattern=r"mul\(\d+,\d+\)|do\(\)|don't\(\)"

    ans = 0
    flag = True
    for item in re.findall(pattern, f.read()):
        if item == "do()":
            flag = True
            continue
        elif item == "don't()":
            flag = False
            continue
        if flag:
            # Extract the two numbers from the string
            numbers = re.findall(r"\d+", item)
            # Convert the numbers to integers
            numbers = [int(number) for number in numbers]
            # Update ans
            ans += numbers[0]*numbers[1]

    print(ans)
