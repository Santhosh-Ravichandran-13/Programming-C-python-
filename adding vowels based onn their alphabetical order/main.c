/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    int s=0;
    fgets(s1,sizeof(s1),stdin);
    for(int i=0;s1[i]!='\0';i++){
      if(s1[i]=='a'||s1[i]=='A'){
          s+=1;
      }
      else if(s1[i]=='e'||s1[i]=='E'){
          s+=5;
      }
      else if(s1[i]=='i'||s1[i]=='I'){
          s+=9;
      }
      else if(s1[i]=='o'||s1[i]=='O'){
          s+=15;
      }
      else if(s1[i]=='u'||s1[i]=='U'){
          s+=21;
      }
      else{
          s=s;
      }
    }
    
    printf("%d",s);

    return 0;
}
