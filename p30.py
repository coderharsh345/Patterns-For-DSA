n=int(input("Enter the number: "))
for row in range(1,n+1):
    for j in range(1,n-row+2):
        print(j,end=" ")
    for k in range(1,((row-1)*2)+1):
        print("*",end=" ")
    for i in range(n-row+1,0,-1):
         print(i,end=" ")
    print("\n")
