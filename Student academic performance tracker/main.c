/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,s6,t;
    printf("The First subject is :");
    scanf("%d",&s1);
    printf("The Second subject is :");
    scanf("%d",&s2);
    printf("The Third subject is :");
    scanf("%d",&s3);
    printf("The Fourth subject is :");
    scanf("%d",&s4);
    printf("The Fifth subject is :");
    scanf("%d",&s5);
    printf("The Sixth subject is :");
    scanf("%d",&s6);
    if(s1<0||s2<0||s3<0||s4<0||s5<0||s6<0){
        printf("Invalid ");
    }else{
    t=s1+s2+s3+s4+s5+s6;
    float p=t/6;
    printf("The Total mark of the student is :%d\n",t);
    printf("The percentage of the student is:%f\n ",p);
    printf("The performance of the student is:");
    if(p>=90){
        printf("EXCELLENT");
    }else if(p<90 && p>=80){
        printf("VERY GOOD ");
    }else if(p<80 && p>=70){
        printf("GOOD");
    }else if(p<70 && p>=50){
        printf("AVERAGE");
    }else{
        printf("NEED IMPROVEMENT");
    }
    int c1=0,c2=0,c3=0,c4=0;
    if(s1>=90){
        c1++;
    }else if(s1>=75 && s1<90){
        c2++;
    }else if(s1>=50 && s1<75){
        c3++;
    }else if(s1<50){
        c4++;
    }
    else{}
    if(s2>=90){
        c1++;
    }else if(s2>=75 && s2<90){
        c2++;
    }else if(s2>=50 && s2<75){
        c3++;
    }else if(s2<50){
        c4++;
    }
    else{}
    if(s3>=90){
        c1++;
    }else if(s3>=75 && s3<90){
        c2++;
    }else if(s3>=50 && s3<75){
        c3++;
    }else if(s3<50){
        c4++;
    }else{}
    if(s4>=90){
        c1++;
    }else if(s4>=75 && s4<90){
        c2++;
    }else if(s4>=50 && s4<75){
        c3++;
    }else if(s4<50){
        c4++;
    }else{}
    if(s5>=90){
        c1++;
    }else if(s5>=75 && s5<90){
        c2++;
    }else if(s5>=50 && s5<75){
        c3++;
    }else if(s5<50){
        c4++;
    }else{}
    if(s6>=90){
        c1++;
    }else if(s6>=75 && s6<90){
        c2++;
    }else if(s6>=50 && s6<75){
        c3++;
    }else if(s6<50){
        c4++;
    }else{
    }
    
    
    printf("\nThe total subjects above 90 is :%d",c1);
    printf("\nThe total subjects in the range of 75-90 is :%d",c2);
    printf("\nThe total subjects in the range of 50-75 is :%d",c3);
    printf("\nThe total subjects below 50 is :%d",c4);
    }
    return 0;
}