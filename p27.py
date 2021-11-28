n=int(input("Enter the number: " ))
for row in range(1,n+1):
    for j in range(row-1):
        print(" ",end=" ")
    for col in range(row,n+1):
        print(row+col-1,end=" ")
    print("\n")
