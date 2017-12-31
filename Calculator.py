CalculatorTut = True

#The while loop iterates(repeates) while the conditions below are true
while CalculatorTut:
    print ("1, Addition")
    print ("2, Subtraction")
    print ("3, Multiplication")
    print ("4, Division")
    print ("5, Quit")

#Conditional statements
if cmd == 1:
    print("Addition")
    First = int(input("Enter the First Number"))
    Second = int(input("Enter the Second Number"))

    Result = First + Second
    print(First, '+', Second, '=', Result)

elif cmd == 2:
    print("Subtraction")
    First = int(input("Enter the First Number"))
    Second = int(input("Enter the second Number")

    Result = First - Second
    print(First, '-', Second, '=', Result)

elif cmd == 3:
    print("Multiplication")
    First = int(input("Enter the First Number"))
    Second = int(input("Enter the second Number"))

    Result = First * Second
    print(First, '*', Second, '=', Result)

elif cmd == 4:
    print("Division")
    First = int(input_("Enter the First Number"))
    Second = int_(input_("Enter the second Number"))

    Result = First / Second
    print(First, '/', Second, '=', Result)

#The program stops when user enters Quit
elif cmd == 5:
    print("Quit!")
    CalculatorTut = False
