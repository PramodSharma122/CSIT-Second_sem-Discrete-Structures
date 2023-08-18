// C to find sum using Recursion function.

#include<stdio.h>
#include<math.h>
int sum(int);

void main() {
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

   printf("the sum is: %d",sum(n));

}

int sum(int n){
    if(n<=0) {
        return 0;
    }
    else {
        return(n+sum(n-1));
    }
} 