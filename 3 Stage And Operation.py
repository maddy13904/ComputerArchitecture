a = int(input("Enter NUMBER-1: "))
b = int(input("Enter NUMBER-2: "))
res = a and b
print(res)
INS = int(input("Enter no. of instructions: "))
performance_measure = INS / 5
print("Performance measure:", performance_measure)

a = int(input("Enter NUMBER-1: "))
b = int(input("Enter NUMBER-2: "))
print("1-ADDITION 2-SUBTRACTION 3-MULTIPLICATION 4-DIVISION")
choice = int(input("Enter Your Choice: "))
counter = 1
if choice == 1:
    print("Performing Addition...")
    res = a + b
    counter += 1
elif choice == 2:
    print("Performing Subtraction...")
    res = a - b
    counter += 1
elif choice == 3:
    print("Performing Multiplication")
    res = a * b
    counter += 1
elif choice == 4 and b != 0:
    print("Performing Division")
    res = a / b
    counter += 1
else:
    print("Enter Correct Input")
print(res)
counter += 3
print("CYCLE VALUE IS:", counter)
ins = int(input("Enter the No. of instructions: "))
performance_measure = ins / counter
print("Performance measure is:", performance_measure)
