n=int(input("Enter the number of row and cols : "))
start=65#A
for row in range(1,n+1):
    for col in range(1,n+1):
        print(chr(start),end=" ")
        start=start+1
    print("\n")
        
    
