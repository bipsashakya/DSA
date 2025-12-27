#include <stdio.h>
void bubblesort(int N ,int A[]){
    int i,j,temp;
    for (i=0;i<N-1 ;i++){
        for(j=0; j<N-1-i;j++){
        if (A[j] > A[j+1]){
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
    }
}
int main(){
    int A[]={20,10,50,40,89};
    int i,N=5;
    bubblesort(N,A);
    printf("After bubble sorting:");
    for(i=0;i<N;i++){
        printf("\t %d ",A[i]);
    }
    return 0;
}