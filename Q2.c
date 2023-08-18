// C to find factorial using Recursion function.

#include<stdio.h>
void main(){
    int n;

    printf("enter the number:");
    scanf("%d",&n);

    printf("factorial is %d",fact(n));

}

int fact(int n){
    if(n<=1){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}