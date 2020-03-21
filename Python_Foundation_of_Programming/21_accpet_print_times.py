#write a program which accept number from user and print that number of & on screen.
#input: 5
#output: $ $ $ $ $

ino= int(input("Enter Number:"))

for a in range(0,ino):
    print("$",end=' ')
