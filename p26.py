n=int(input("Enter the number: " ))
value=1
for row in range(1,n+1):
    for j in range(n-row+1):
        print(" ",end=" ")
    for col in range(1,row+1):
        print(value,end=" ")
        value+=1
    print("\n")
