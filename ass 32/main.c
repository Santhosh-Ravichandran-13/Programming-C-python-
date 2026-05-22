#include <stdio.h>
#include <string.h>
int main()
{
    printf("Santhosh R\n");
    char file[3][50];
    char key[50];
    int i;
    printf("Enter 3 file names:\n");
    for(i=0;i<3;i++)
        scanf("%s",file[i]);
    printf("Enter file to search: ");
    scanf("%s",key);
    for(i=0;i<3;i++)
    {
        if(strcmp(file[i],key)==0)
        {
            printf("File found");
            return 0;
        }
    }
    printf("File not found");}
