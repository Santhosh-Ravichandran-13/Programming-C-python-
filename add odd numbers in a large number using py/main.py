'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
a=int(input())
n=0
while(1):
      s=a%10
      if(s%2==0):
         n=n
      else:
         n=n+s 
      
      a=a//10
      if(a==0):
       break
  
      
print(n)