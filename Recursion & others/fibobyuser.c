#include<stdio.h>

int fibo(int n, int f, int s){
    if(n == 0)
        return f;
    else if(n == 1)
        return s;
    else
        return fibo(n-1, f, s) + fibo(n-2, f, s);
}

int main(){
    int n, f, s;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Enter first and second values: ");
    scanf("%d %d", &f, &s);

    printf("The Fibonacci sequence is:\n");

    for(int i = 0; i < n; i++){
        printf("%d ", fibo(i, f, s));
    }

    return 0;
}
