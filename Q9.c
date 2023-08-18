// C program to for finding permutation.

#include<stdio.h>

void main() {
    int n,r,i,a=1,b=1,p;
    printf("Enter the value of n and r: ");
    scanf("%d%d",&n,&r);

    for(i=1;i<=n;i++) {
        a=a*i;
    }
    for(i=1;i<=n-r;i++) {
        b=b*i;
    }
    p=a/b;
    printf("The permutation is: %d\n",p);
}