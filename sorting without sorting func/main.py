'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
a=int(input())
lis=[]
s1=[]
for i in range(a):
    s=int(input())
    lis.append(s)
    
print(f"The list is {lis}")

for i in range(a):
     mi=min(lis)
     s1.append(mi)
     lis.remove(mi)
    
       
print(s1)