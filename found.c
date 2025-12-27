#include <stdio.h>
void main(){
    int i ,key,found=0;
    int A[] ={10,20,30,40,50};
    printf("Insert a number to search:");
   scanf("%d",&key);
 for(i=0;i<5;i++)
 if(key==A[i])
 {
    found=1;
    break;
 }
 if (found==1)
 printf("found");
 else
 printf("Not found");
}