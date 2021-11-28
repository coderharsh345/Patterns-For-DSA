n=int(input("Enter the number: "))
for row in range(1,n+1):
    for col in range(1,n+1):
        print(chr(65+row-1),end=" ")
    print("\n")
