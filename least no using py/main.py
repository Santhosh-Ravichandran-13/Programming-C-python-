'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
a=int(input())
b=int(input())
c=int(input())

if(a <b and a<c):
    print(f"The least number is {a}")
elif(b<c and b<a):
    print(f"the least number is {b}")
else:
    print(f"The least number is {c}")