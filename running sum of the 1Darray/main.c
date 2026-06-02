/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
int* runningSum(int* nums, int numsSize, int* returnSize) {
     int* res=(int*)malloc(numsSize*sizeof(int));
     int s=0,k=0;
     for(int i=0;i<numsSize;i++){
        s+=nums[i];
        res[k++]=s;
     }
     *returnSize=k;
     return res;
}
