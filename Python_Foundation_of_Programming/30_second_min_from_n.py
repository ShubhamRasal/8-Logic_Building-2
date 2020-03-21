#write a program which accept N Numbers from user and print second minimum number from that numbers.
#input:N=7 4 7 2 1 5 3 8 
#output:2

iN = int(input("Enter how many numbers?"))

lint_list= []

#accept input
for i in range(0,iN):
    itemp= int(input("Enter {}:".format(i+1)))
    lint_list.append(itemp)

#find second min                          <-- way 1
imin = isec_min =lint_list[0]

for i in range(0,iN):
    if(imin > lint_list[i]):
        isec_min= imin
        imin = lint_list[i]
    elif lint_list[i] > imin and lint_list[i] < isec_min:
        isec_min=lint_list[i]
    elif imin == isec_min:
        isec_min= lint_list[i]
    print("isec_max",isec_min)
print("Second min :",isec_min)

#find second min                    <-- way 2

lint_list.sort()
ltemp_list = lint_list
imin = ltemp_list[0]
isec_min=False

for i in range(0,iN):
    if imin != ltemp_list[i]:
        isec_min=ltemp_list[i]
        break
print("Second minimum:",isec_min)
