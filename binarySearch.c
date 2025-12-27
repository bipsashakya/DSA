#include<stdio.h>
int main(){
    int a[] = {2,4,6,8,20};
    int key , left= 0, right = (sizeof(a)/sizeof(a[0]))-1 , mid , found=0;
    printf("Enter the key : ");
    scanf("%d",&key);
    
    while(left<=right){
        mid = (left+right )/2;
        if(key==a[mid]){
            found= 1;
            break;
        }
        else if(key < a[mid])
            right = mid-1;
        else
            left = mid+1;
    }
    
    if(found == 1)
        printf("The number is found");
    else 
        printf("The number is not found");
    return 0;
}