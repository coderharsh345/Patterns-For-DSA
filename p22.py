n=int(input("Enter the number: "))
for row in range(1,n+1):
    j=n-row+1
    for col in range(1,j+1):
        print("*",end=" ")
    print("\n")
