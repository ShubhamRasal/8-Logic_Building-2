#write a program which accept two numbers and check whether 1st number is divisible by second
#number or not.
#IP: 11 22
#oP: 22

ino1,ino2 = input("Enter two Numbers:").split()

ino1=int(ino1)
ino2=int(ino2)


if (ino1 % ino2) == 0 :
    print("Divisible")
else:
    print("Not Divisible")
