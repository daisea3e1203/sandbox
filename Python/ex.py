x = int(input("Please enter an integer: "))

if x < 0:
    x = 0
    print('Negative changed to zero')
elif x == 0:
    print("zero")
elif x == 1:
    print("single")
else:
    print("more")

