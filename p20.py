n=int(input("Enter the number: "))
r=65
for row in range(1,n+1):
    start=r+n-row
    for col in range(1,row+1):
        print(chr(start),end=" ")
        start+=1
    print("\n")
#limit=68
#j=68
#i=68
#row=1
#while row<=4:
#   i=j
#   while i<=limit:
#       print(chr(i),end=' ')
#       i=i+1
#    j=j-1
#     row=row+1
#    print('\n')
