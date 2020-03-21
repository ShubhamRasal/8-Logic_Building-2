#write a program which accept percentage from user nad print class(Greater than 70:Distinction ,
#greater than 60 : First Class, Greater than 50 : Second class, Greater than 40: pass class,
#otherwise: fail)
#input: 78.9
#output:Distinction

def get_class(fper):
    pclass=''
    if fper > 70:
        pclass='Distinction'
    elif fper > 60:
        pclass='First class'
    elif fper > 50:
        pclass='Second Class'
    elif fper > 40:
        pclass='Pass'
    else:
        pclass='fail'
    return pclass

student_per =float(input("Enter Percentage:"))

print("You Got:"+get_class(student_per))
