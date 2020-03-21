#write a program which accept single digit number from user and print it into word.
#input:9
#output:Nine

def number_to_string(ino):
    #make a dict 
    switcher={      
            0:'zero',
            1:'one',
            2:'two',
            3:'three',
            4:'four',
            5:'five',
            6:'six',
            7:'seven',
            8:'eight',
            9:'nine'
            }
    #dict have get() method which retruns the value of argument if found 
    #otherwise it returns second argument
    default='Not Valid Number'

    return switcher.get(ino,default)

ino=int(input("Enter single digit:"))

print("You entered :"+number_to_string(ino))

