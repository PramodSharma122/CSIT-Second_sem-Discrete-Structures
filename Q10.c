// C program to for finding Combination.

#include<stdio.h>

void main() {
    int n,r,i,a=1,b=1,c=1,com;
    printf("Enter the value of n and r: ");
    scanf("%d%d",&n,&r);

    for(i=1;i<=n;i++) {
        a=a*i;
    }
    for(i=1;i<=n-r;i++) {
        b=b*i;
    }
    for(i=1;i<=r;i++) {
        c=c*i;
    }
    com=a/(b*c);
    printf("The permutation is: %d\n",com);
}