#include <stdio.h>

void merge( int a[] , int left , int right){
    int l = left , temp[100] , i , end = (right+left)/2 , mid = end+1 , pos = left;
    
    if (left < right){
       merge(a,left,end);
       merge(a,end+1,right);
    
    while(left <= end && mid<= right){
        
        if (a[left] < a[mid]){
            temp[pos] = a[left];
          left++;
          pos++;
        }
        else {
            temp[pos] = a[mid];
            mid++;
            pos++;
        }
        
    }
    
    while(left<=end){
        temp[pos]= a[left];
        pos++;
        left++;
    }
    while(mid <= right){
        temp[pos]= a[mid];
        pos++;
        mid++ ;
    }
    
    for( i = l ; i <= right ; i++){
        a[i] = temp[i];
    }
}
}
int main(){
    int a[]={99,78,56,23,17,18,21,01} ;
    int left = 0 ;
    int n = sizeof(a)/ sizeof(a[0]);
    merge(a,left,n-1);
    
    printf("The array after merge sort is :");
    for(int i = 0 ; i<n ; i++)
        printf("%d\t", a[i]);
    return 0 ;
}