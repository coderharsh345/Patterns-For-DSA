n=int(input('enter the number: '))
count=1

for row in range(1,n+1):
    for col in range(1,row+1):
        print(count,end=" ")
        count+=1
    print("\n")
