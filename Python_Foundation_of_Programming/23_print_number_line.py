#write a program which accept number and print its number line.
#input:4
#output: -4 -3 -2 -1 0 1 2 3 4

ino =int(input("Enter Number:"))

for i in range(-ino,ino+1):
    print(i,end=' ')
