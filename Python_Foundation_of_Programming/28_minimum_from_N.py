#write a program which accpet N numbers from user and return minimum.

iN =int(input("Enter how many numbers?"))

mynums=[]

for i in range(0,iN):
    itemp= int(input("Enter {}:".format(i+1)))
    mynums.append(itemp)

print("minimum number:",min(mynums))
