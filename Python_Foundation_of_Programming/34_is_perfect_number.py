#write a program to check given number is perfect number or not.
#perfect numbers are 6,28,496,8128 
#sum of its factors are equal to itself

#input:6
#output: True

def is_perfect(ino):
    isum=0;

    for i in range(1,int(ino/2)+1):
        if ino % i == 0:
            isum+=i
    if isum == ino:
        return True
    else:
        return False

ino=int(input("Enter Number to check perfect :"))
print("Output:{}".format(is_perfect(ino)))
