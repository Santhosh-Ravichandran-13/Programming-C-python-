'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
n=10
print("The series :")
for i in range(n+1):
   print(i,end=" ")
print("\nThe reverse series:")
for i in range(n+1):
    print(n-i,end=" ")
print("\nThe interval series:")
for i in range(0,n*n,3):
    print(i,end=" ")