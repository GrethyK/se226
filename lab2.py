def task1():
    n = int(input("Enter an integer greater than 9: "))

    while n <= 9:
        n = int(input("Enter an integer greater than 9: "))

    steps = 0;
    print(n, end="")

    while n >= 10:
        temp = n
        digitsSum = 0
        while temp > 0 :
            digit = temp % 10
            digitsSum = digitsSum + digit
            temp = temp // 10
        n = digitsSum
        steps = steps + 1
        print("->",n,end="")

    print()
    print("Final value:", n)
    print("Total steps:", steps)


def task2():
    n = int(input("Please enter a number between 10 and 100: "))
    while n < 10 or n > 100:
        n = int(input("Invalid input. Please enter a number between 10 and 100: "))

    fizz = 0
    buzz = 0
    fizzbuzz = 0

    for i in range(1, n + 1):

        if i % 7 == 0:
            continue

        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz")
            fizzbuzz += 1
        elif i % 3 == 0:
            print("Fizz")
            fizz += 1
        elif i % 5 == 0:
            print("Buzz")
            buzz += 1
        else:
            print(i)

    print("--- Summary ---")
    print(f"Fizz count   : {fizz}")
    print(f"Buzz count   : {buzz}")
    print(f"FizzBuzz count: {fizzbuzz}")


def task3():
    n = int(input("Please enter a number between 3 and 9: "))
    while n < 3 or n > 9:
        n = int(input("Invalid input. Please enter a number between 3 and 9: "))

    total_rows = 2 * n - 1
    for i in range(1, total_rows + 1):
        k = n - abs(n - i)
        print("*" * k)


if __name__ == "__main__":
    task1()
    task2()
    task3()