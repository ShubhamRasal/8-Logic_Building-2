#write a program which accept one number from user and print maximum from that number.
#input: 4 5 6 7 2 3 5 9
#output:  9

#accept the length
iN = int(input("How many elements?"))
lmynums =[]
print("Enter numbers:")
for i in range(0,iN):
    itemp=int(input())
    lmynums.append(itemp)

print("Maximum Number :",max(lmynums))
