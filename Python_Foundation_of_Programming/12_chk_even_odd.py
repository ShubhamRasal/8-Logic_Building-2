#write a program which accept number and check whether it is even or odd.

def chk_even_odd(ino):
    if ino % 2 == 0:
        print("EVEN")
    else:
        print("ODD")

ino =int(input("Enter Number:"))

print("Number is:",end=' ')
chk_even_odd(ino)
