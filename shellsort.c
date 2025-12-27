#include <stdio.h>
void main(){
    int A[]={5,10,8,3,12,1};
    int N=6,i,j,temp,gap;
    for(gap=N/2;gap>0;gap=gap/2)
    {
        for (i=0;i<N;i++){
            temp=A[i];
            j=i-gap;
            while (j>=0 && A[j]>temp){
                A[j+gap]=A[j];
                j=j-gap;
            }
           A[j+gap]=temp;
        }
    }
    printf("After shell sort: ");
    for (i=0;i<N;i++){
        printf("%d\t",A[i]);
    }
}