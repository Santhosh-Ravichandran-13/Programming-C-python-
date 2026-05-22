// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int i,j,n,flag=0;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];;
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            printf("The first repeative element is:%d",arr[i]);
               flag=1;
            break;
        }
    }
    if(flag==1){
         break;
     }   
    }
    if(flag==0){
        printf("There is no repeative value");
    }
    return 0;
}