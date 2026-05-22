/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];
    int freq[10]={0};
    printf("Enter the lements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array:");
     for(i=0;i<n;i++){
        
          printf("%d\n",arr[i]);
        
    }
    for(i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            freq[arr[i]]++;
        }
    }
    printf("Frequency of the array:");
    for(i=0;i<n;i++){
        printf("%d\n",freq[i]);
    }
    int max=0;
    int num=0;
    for(i=0;i<10;i++){
        if(freq[i]>max){
            max=freq[i];
        }
    }
    int maxe;
    for(i=0;i<10;i++){
        if(maxe<freq[i]){
            maxe=i;
        }
    }
     printf("The max frequency of the  element is %d",max+1); 
    printf("\nThe element of the max  frequency    is %d",maxe);
}
