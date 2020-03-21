#write a program to check given number is prime or not.
#input: 5
#output:True

#is_prime(argument) -> 
#takes integer input and returns boolean value
#true => number is Prime 
#false=> number is not prime.

def is_prime(ino):
    bflag=True

    for i in range(2,int(ino/2)+1):
        if ino % i == 0:
            bflag=False
            break
    return bflag

ino= int(input("Enter number to check number is prime or not:"))

print("Is Prime :{}".format(is_prime(ino)))
