#write a program to print Fibonacci series. Accept number of elements in series from user.
#input: 6
#output: 0 1 1 2 3 5

def get_fibonacci_series(ino):
    iterm1,iterm2,inext=0,1,0
    fibo_series =[]
    
    for i in range(0,ino):
        fibo_series.append(iterm1)
        inext = iterm1 + iterm2
        iterm1= iterm2
        iterm2 = inext

    return fibo_series

ino=int(input("Enter Number:"))
print("Fibo:{}".format(get_fibonacci_series(ino)))
