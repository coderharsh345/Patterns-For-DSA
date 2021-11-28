n=int(input("Enter the number: "))
for row in range(1,n+1):
    for j in range(1,n-row+1):
        print(" ",end=" ")
    for col in range(1,row+1):
        print(col,end=" ")
    start=row-1
    while(start):
        print(start,end=" ")
        start=start-1
    print("\n")
