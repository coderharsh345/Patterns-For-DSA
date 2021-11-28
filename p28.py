n=int(input("Enter the number: " ))
for row in range(1,n+1):
    for j in range(row-1):
        print(" ",end=" ")
    start=row
    for col in range(n,row):
        print(start,end=" ")
        start=start+1
    print("\n")
