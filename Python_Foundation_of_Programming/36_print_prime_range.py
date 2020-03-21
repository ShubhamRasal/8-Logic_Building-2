#write a program which accept range from user and print prime numbers from range.
#input: 1 10
#output:Prime Numbers : 2 3 5 7 

def get_prime_range(ilb,iup):

    prime_numbers =[]
    
    #filter 1
    if ilb == 1:
        ilb=2

    for i in range(ilb,iup+1):
        bflag=True

        for t in range(2,int(i/2)+1):
            if i % t == 0:
                bflag = False
                break

        if bflag == True:
            prime_numbers.append(i)

    return prime_numbers

irange1,irange2 =input("Enter range seprated by space:").split()

prime_list = get_prime_range(int(irange1),int(irange2))

print("Output:{}".format(prime_list));
