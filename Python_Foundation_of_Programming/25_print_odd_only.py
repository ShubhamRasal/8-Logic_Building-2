#write a program which accept one number[N] and print all odd numbers upto N.
#input: 18
#output: 1 3 5 7 9 11 13 15 17

ino =   int(input("Enter Number(N):"))

for i in range(1,ino+1,2):
    print(i,end=' ')
