n=int(input("Enter the number: "))
for row in range(1,n+1):
    space=row-1
    star=n-row+1
    while(space):
        print(" ",end=" ")
        space=space-1
    for col in range(1,star+1):
        print(row,end=" ")
    print("\n")
    
