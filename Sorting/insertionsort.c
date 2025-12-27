#include <stdio.h>
void main(){
    int A[]={7,9,6,4,2,1};
    int N=6,i,j,temp;
    for(i=1;i<N;i++)
    {
        temp=A[i];
        j=i-1;
        while(j>=0 && temp< A[j])
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=temp;
    }
printf("After sorting:");
for(i=0;i<N;i++){
    printf("\n%d",A[i]);
    }
}