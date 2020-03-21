#write a program which accept one number[N] and print all even numbers upto N.
#input: 18
#output: 2 4 6 8 10 12 14 16 18

ino =   int(input("Enter Number(N):"))

for i in range(2,ino+1,2):
    print(i,end=' ')
