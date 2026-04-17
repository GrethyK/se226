from data_package import remove_duplicates, strip_whitespaces
from data_package import calculate_mean, find_maximum, find_minimum

raw_input = input("Enter a comma-separated list of numbers (e.g., 12, 5, 12, 8 , 21): ")

try:
    parts = raw_input.split(",")
    stripped = strip_whitespaces(parts)
    numbers = [float(x) for x in stripped]
    cleaned = remove_duplicates(numbers)

    print(f"Cleaned and unique data: {cleaned}")
    print("-" * 20)
    print(f"Mean: {calculate_mean(cleaned):.2f}")
    print(f"Maximum: {find_maximum(cleaned)}")
    print(f"Minimum: {find_minimum(cleaned)}")

except ValueError:
    print("Data Error: Please make sure you only enter numbers separated by commas.")