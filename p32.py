n=int(input("Enter the number: "))
for row in range(1,n+1):
    for j in range(1,n-row+1):
        print(" ",end=" ")
    for col in range(1,((row)*3)+1):
        print("*",end=" ")
    for i in range(1,n-row+1):
        print(" ",end=" ")
    print("\n")
