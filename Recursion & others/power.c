#include <stdio.h>
int power (int n, int m){
    if (m==0)
    return 1;
    else
    return n*power(n,m-1);
}
int main(){
    int m,n,powr;
    printf("Enter the value of m & n :");
    scanf("%d %d",&m,&n);
    powr= power(m,n);
    printf("power is %d",powr);
    return 0;
}