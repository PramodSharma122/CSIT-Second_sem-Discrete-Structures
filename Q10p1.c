// C program to for finding Combination using recursive function.

#include<stdio.h>
#include<stdlib.h>

int fac(int);
int main() {
    int n,r,a=1,b=1,c=1,com;

    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);
    if(r>n) {
        printf("Invalid Entries...");
        exit(0);
    }
    a=fac(n);
    b=fac(n-r);
    c=fac(r);
    com=a/(b*c);

    printf("Combination: %d\n",com);
}

int fac(int n) {
    if(n<=1) {
        return 1;
    }
    else {
        return (n*fac(n-1));
    }
}