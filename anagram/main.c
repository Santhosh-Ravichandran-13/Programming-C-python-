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
    int flag=0;
    char s[20];
    char s1[20];
    scanf("%s",s);
    scanf("%s",s1);
    int i,j;
    int len=strlen(s);
    int len1=strlen(s1);
    
if(len!=len1){
    printf("NOT Anagram.");
    return 0;
}
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(s[i]>s[j]){
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
       
    }
    printf("\nI :%s",s);
    for(i=0;i<len1;i++){
        for(j=i+1;j<len1;j++){
            if(s1[i]>s1[j]){
                char temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
        }
       
    }
    printf("\nII : %s",s1);
    for(i=0;i<len;i++){
        if(s[i]!=s1[i]){
          printf("\nNot anagram:");
          return 0;
        }
    }
    printf("\nAnagram");
    return 0;
}
