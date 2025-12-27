#include<stdio.h>

void insert(int a[] , int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && temp>a[j]){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    printf("After Insertion sort in descending order: \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}

int main(){
    int a[]={7,2,5,8,1,9} , n= 6;
    insert(a,n);
    
    return 0;
}

