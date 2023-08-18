// C program to for finding Greatest Common Divider of two numbers.

#include<stdio.h>

void main() {
    int x,y,i,gcd=1;

    printf("enter the two number: ");
    scanf("%d%d",&x,&y);

    for(i=1;i<=x;i++){
        if (x%i==0 && y%i==0){
            gcd=i;
        }
    }
    printf("The GCD is %d \n",gcd);
    }
