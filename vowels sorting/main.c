/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdbool.h>
bool check(char s1,char s2){
    if((s1=='A'||s1=='a'||s1=='e'||s1=='E'||s1=='o'||s1=='O'||s1=='U'||s1=='u')&&(s2=='A'||s2=='a'||s2=='e'||s2=='E'||s2=='o'||s2=='O'||s2=='U'||s2=='u')){
        return true;
    }
    return false;
}
int main()
{
    char s[20];
    int i,j,found=0;
    printf("The string :\n");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        for(j=i+1;s[j]!='\0';j++){
            if(check(s[i],s[j]))
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                
            }
        }
    }
    
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='A'||s[i]=='a'||s[i]=='e'||s[i]=='E'||s[i]=='o'||s[i]=='O'||s[i]=='U'||s[i]=='u'){
            printf("%c",s[i]);
        }
    }
    //printf("%s",s);
    return 0;
}
