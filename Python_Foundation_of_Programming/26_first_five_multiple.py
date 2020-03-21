#write a program which accept one number and prints its first five multiple.
#input:5
#output: 5 10 15 20 25

ino = int(input("Enter number:"))

print("First Five Multiples are:")

for i in range(1,6):
    print(i*ino,end=' ')
