#include <stdio.h>
int fibo(int n){
    if(n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else {
        return fibo(n-1) + fibo(n-2);
    }
}
int main(){
    int n,f,i;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("The fibonacci series upto %dth term is",n);
    for (i=0 ; i<n;i++){
        f= fibo(i);
printf("%d",f);
    }
    return 0;
}