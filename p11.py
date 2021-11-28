n=int(input('enter the number: '))
for row in range(1,n+1):
    for col in range(1,n+1):
        char ch='A'+row-1
        print(ch,end=" ")
    print("\n")
