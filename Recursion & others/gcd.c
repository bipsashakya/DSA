#include <stdio.h>
int gcd (int a,int b){
    if (a % b == 0)
    return b;
    else 
    return gcd(b,a%b);
}
int main(){
    int a,b,g;
printf("Enter the value of a & b :");
scanf("%d %d", &a,&b);
g=gcd(a,b);
printf("Gcd is %d",g);
return 0;
}