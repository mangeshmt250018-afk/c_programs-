num = int(input("Enter a number: "))
factorial = 1
if num < 0:
    print("Factorial of negative number is not define,so Enter a valid number")
elif num == 0:
    print("factorial of 0 is 1")
else:
    for i in range(1,num+1):
        factorial = factorial*i
    print("factorial of ",num," is ",factorial)