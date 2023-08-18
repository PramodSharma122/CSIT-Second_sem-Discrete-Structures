// C to find Fibonacci using Recursion function.

#include<stdio.h>
int fib(int);

void main(){
    int n;
    printf("enter the nth term: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ", fib(i));
    }
}
int fib(int n){
    if (n<=1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}