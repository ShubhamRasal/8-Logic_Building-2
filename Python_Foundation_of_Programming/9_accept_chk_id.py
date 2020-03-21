#write a program which accept one character and store it into memory and print address of that number.
#input:
#output:


char = input("Enter Character:")[0]

print("Charcter : %s  Type: %s id: %d" %(char,type(char),id(char)))

char2 = input("Enter Same Character as Above:")[0]

print("Charcter : %s  Type: %s id: %d" %(char2,type(char2),id(char2)))
