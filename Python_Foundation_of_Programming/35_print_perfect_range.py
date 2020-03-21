#write a program which accept range from user and print perfect numbers from range.
#input: 1 10
#output:Perfect Numbers : 6

def get_perfect_range(ilb,iup):

    perfect_numbers =[]
    for i in range(ilb,iup+1):
        isum=0
        for t in range(1,int(i/2)+1):
            if i % t == 0:
                isum+=t

        if isum == i:
            perfect_numbers.append(i)

    return perfect_numbers

irange1,irange2 =input("Enter range seprated by space:").split()

perfect_list = get_perfect_range(int(irange1),int(irange2))

print("Output:{}".format(perfect_list));
