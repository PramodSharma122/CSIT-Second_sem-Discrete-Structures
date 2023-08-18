// C program for finding cartesion product of two sets.

#include<stdio.h>

void main() {
    int a[10],b[10],i,j;
    
    printf("Enter d element in set a: ");
    for(i=0;i<5;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter d element in set b: ");
    for(j=0;j<5;j++) {
        scanf("%d",&b[j]);
    }
    printf("Cartesion product: ");
    printf("{");
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
            printf("(%d,%d)",a[i],b[j]);
            printf(",");
        }
    }
    printf("\b }");
}