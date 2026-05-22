'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
s=int(input())
lis=[]
for i in range(s):
    k=int(input())
    lis.append(k)

print(f"list :{lis}")
so=sorted(lis)
print(f"sorted list:{so}")
d=so[::-1]
print(f"descending order:{d}")
ma=max(lis)
mi=min(lis)
print(f"The sum of the max and min of the lis:{ma*mi}")

print(f"The first two values of the soortyed list is :{so[0]+so[1]}")