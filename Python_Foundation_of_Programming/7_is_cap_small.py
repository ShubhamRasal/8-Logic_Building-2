#write a program to check character is small or capital
#input: a
#output:samll

char = input("Enter Character:")[0]

if char.isupper():
    print("Capital")
elif(char.islower()):
    print("small")
else :
    print("Not a alphabet.")
