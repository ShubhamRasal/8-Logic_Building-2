#write a program which accept number from user and if number is less than 50 then print small,
#if it is greater than 50 and less than 100 then medium ,if it is greater than 100 then print large.
#input: 75
#output: medium

def small_medium_large(ino):
    if ino < 50:
        print("small")
    elif ino< 100:
        print("medium")
    else:
        print("large")

ino =int(input("Enter number:"))
small_medium_large(ino)
