#write a program which accept two numbers and print its maximum number.
#IP: 11 22
#oP: 22

ino1,ino2 = input("Enter two Numbers:").split()

ino1=int(ino1)
ino2=int(ino2)

#way 1
print("Maximum Number:",end='')
print(max(ino1,ino2))

#way 2

if ino1 > ino2 :
    print("Maximum Number:",ino1)
else:
    print("Maximum Number:",ino2)
