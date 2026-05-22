// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int i,n,flag=0;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];;
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            printf("The first repeative element is:%d",arr[i]);
            flag=1;
            break;
        }
        
    }
    if(flag==0){
        printf("\nThere is no repeative element.");
    }
    return 0;
}