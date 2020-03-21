#write a program to find power of given number
#input 2 4
#output:16

ibase = int(input("Enter base:"))
iexp =int(input("Enter exp :"))

power = ibase ** iexp;

power2 =pow(ibase,iexp)

print("Power 1:{},Power 2:{}".format(power,power2))
