n=int(input("Enter the number: "))
for row in range(1,n+1):
    value=row
    for col in range(1,n+1):
        print(value,end=" ")
        value+=1
    print("\n")
    
