'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
a=int(input())
lis=[]
e=[]
o=[]
for i in range(a):
    k=int(input())
    lis.append(k)

for i in range(a):
    if(lis[i]%2==0):
        e.append(lis[i])
    else:
        o.append(lis[i])
    
e=set(e)
o=set(o)

e=list(e)
o=list(o)
print(f"The even list is:{e}")
print(f"The odd list is:{o}")