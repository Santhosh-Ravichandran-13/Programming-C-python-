#include <stdio.h>
int main()
{
    printf("Santhosh R\n");
    int n,i,j,temp,a[50];
    printf("Enter number of tasks: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter priority: ");
        scanf("%d",&a[i]);}
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;}}}
    printf("Task order by priority:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);}
