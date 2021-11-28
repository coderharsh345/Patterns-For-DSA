n=int(input("Enter the number: "))
for row in range(1,n+1):
    space=n-row
    while(space):
        print(" ",end=" ")
        space=space-1
    for col in range(1,row+1):
        print(row,end=" ")
    print("\n")
