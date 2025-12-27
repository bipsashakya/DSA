#include<stdio.h>
int fibo(int n,int a ,int b)
{
    if(n==1)
    {
        return a;
    }
    else if (n==1){
        return b;
    }
    else 
    return fibo(n-1,b,a+b);
}
int main(){
    int n,a,b,f,i;
    printf("Enter the number of terms");
    scanf("%d",&n);
    printf("The fibonacci series upto %dth term is",n);
    for(i=0;i<n;i++){
        f=fibo(i,0,1);
        printf("%d",f);
    }
    return 0;
}