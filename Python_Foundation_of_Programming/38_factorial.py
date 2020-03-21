#write a program to find factorial of given number
#input:5
#ouput:120

def get_fact(ino):
    ans=1
    #filer
    if ino < 0:
        return False
    while(ino!=1):
        ans*=ino
        ino-=1
    return ans

ino =int(input("Enter Number:"))

print("Factorial:{}".format(get_fact(ino)))
