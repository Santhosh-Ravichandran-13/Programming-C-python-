/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r,c,i,j,m=0;
    printf("Enter the rows and columns :");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the Elements:");
    for( i=0;i<r;i++){
        for( j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]>m){
                m=arr[i][j];
            }
        }
    }
    printf("Elements in array is:\n");
    for( i=0;i<r;i++){
        for( j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The largest Element is :%d",m);
    return 0;
}
