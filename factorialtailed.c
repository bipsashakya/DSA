#include <stdio.h>
int fact(int n ,int result){
    if (n==0 || n==1)
    {
        return result;
    }
    else
    return fact(n-1,n*result);
}
int main(){
    int n,r;
    printf("Enter a number:");
    scanf("%d",&n);
    r= fact(n,1);
    printf("factorial of %d is %d",n,r);
    return 0;
}
