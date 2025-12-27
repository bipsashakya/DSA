#include <stdio.h>
int main(){
    int i,j,temp,N=5;
 int A[]={20,10,50,70,90};
 for(i=0; i<N-1 ;i++){
    for(j=0; j<N-1-i ;j++){
        if (A[j]>A[j+1]){
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;

        }
    }
 }

 printf("After bubble sorting :");
 for (i=0;i<N;i++)
 printf("\t %d",A[i]);
 return 0;
}