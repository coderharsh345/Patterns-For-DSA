n=int(input("Enter the Number: "))
for row in range(1,n+1):
    value=row
    for space in range(1,row):
        print(" ",end=" ")
    for col in range(row,n+1):
        print(value,end=" ")
        value+=1
    print("\n")
