// C program to for searching by using linear array.

#include<stdio.h>
#include<stdlib.h>

void main() {
    int a[5],i,s;

    printf("Enter the numbers: ");
    for(i=0;i<5;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you are searching: ");
    scanf("%d",&s);

    for(i=0;i<5;i++) {
        if(a[i]==s) {
            printf("We have found the number.\n");
            exit(0);
        }
    }
    printf("We haven't fount the number.\n");
}