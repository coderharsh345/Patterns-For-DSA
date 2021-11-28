n=int(input('enter the number: '))
for row in range(1,n+1):
    for col in range(1,row+1):
        print(row-col+1,end=" ")
    print("\n")
