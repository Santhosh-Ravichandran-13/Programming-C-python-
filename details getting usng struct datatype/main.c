/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct stu{
 int age;
 int pin;
 int roll;
};
int main()
{
   struct stu s1={641001,19,248};
   struct stu s2={642321,18,149};
   struct stu s3={675421,20,501};
   
   printf("%d %d %d\n",s1.age,s1.pin,s1.roll);

    return 0;
}
