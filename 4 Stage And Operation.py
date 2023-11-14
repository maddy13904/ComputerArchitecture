counter=1
a=int(input("ENTER NUMBER-1-"))
counter += 1
b = int(input("ENTER NUMBER-2-"))
counter += 1
print("1-ADDITION 2-SUBTRACTION 3-MULTIPLICATION 4-DIVISION\nEnter Your Choice")
choice = int(input())
res = 0
if choice == 1:
    print("Performing Addition...");
    res = a + b
    counter += 1
elif choice == 2:
    print("Performing Subtraction...");
    res = a - b
    counter += 1
elif choice == 3:
    print("Performing Multiplication");
    res = a * b
    counter += 1
elif choice == 4:
    print("Denominator can't be Zero");
    if b!=0:
        res = a / b
    else:
        print("Performing Division...");
        counter+=1
if choice >= 5:
    print("Enter Correct Input")
print(res)
counter += 3
print("CYCLE VALUE IS:", counter)
ins = int(input("Enter the No.of instructions:"))
performance_measure = ins / counter
print("performance measure is:", performance_measure)
