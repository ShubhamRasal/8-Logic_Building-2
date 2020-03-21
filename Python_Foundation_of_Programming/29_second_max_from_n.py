#write a program which accept N Numbers from user and print second maximum number from that numbers.
#input:N=7 4 7 2 1 5 3 8 
#output:7

iN = int(input("Enter how many numbers?"))

lint_list= []

#accept input
for i in range(0,iN):
    itemp= int(input("Enter {}:".format(i+1)))
    lint_list.append(itemp)

#find second max                          <-- way 1
imax = isec_max = lint_list[0]

for i in range(0,iN):
    if(imax < lint_list[i]):
        isec_max= imax
        imax = lint_list[i]
    elif lint_list[i] < imax and lint_list[i] > isec_max:
        isec_max=lint_list[i]
    elif imax == isec_max:
        isec_max= lint_list[i]

if imax == isec_max:
    isec_max= False

print("Second max :",isec_max)

#find second max                    <-- way 2

lint_list.sort(reverse=True)
ltemp_list = lint_list
imax = ltemp_list[0]
isec_max=False

for i in range(0,iN):
    if imax != ltemp_list[i]:
        isec_max=ltemp_list[i]
        break
print("Second maximum:",isec_max)
