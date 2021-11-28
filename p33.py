n=int(input("Enter the number: "))
for i in range(1,n+1):
    print(" "*(i-1),end=" ")
    for j in range(i,n):
        print(j,end=" ")
    print("\n")
