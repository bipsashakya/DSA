#include <stdio.h>
void TOH(int n ,int a,int b, int c){
    if(n>0)
    {
        TOH(n-1,a,c,b);
        printf("\nMove disk %d from %c to %c",n,a,b);
        TOH(n-1,c,b,a);
    }
}
int main(){
    int n;
    printf("Enter number of disks:");
    scanf("%d",&n);
    printf("\nSteps to solve the tower of hanoi:\n");
    TOH (n,'A','B','C');
    return 0;
}