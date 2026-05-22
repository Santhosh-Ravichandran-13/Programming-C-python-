/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int binarysearch(int arr[],int low,int high,int key){
    if(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid]){
            return binarysearch( arr,low, mid-1,key);
        }
        return binarysearch(arr,mid+1,high,key);
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=binarysearch(arr,0,9,4);
    printf("%d",n);
    return 0;
}
