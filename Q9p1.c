#include<stdio.h>
#include<stdlib.h>

int fac(int);
int main() {
    int n,r,a,b,p;

    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);
    if (r>n) {
        printf("Invalid Entries...\n");
        exit(0);
    }

    a=fac(n);
    b=fac(n-r);
    p=a/b;

    printf("Permutation: %d\n",p);
}

int fac(int n) {
    if(n<=1) {
        return 1;
    }
    else {
        return (n*fac(n-1));
    }
}