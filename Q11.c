// C program to for to sort on ascending order using linear array.

#include<stdio.h>

void main() {
    int a[5],i,j,temp;

    printf("Enter the numbers in array: ");
    for(i=0;i<5;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++) {
        for(j=i+1;j<5;j++) {
            
            if(a[i]>a[j]) {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("The sorted array is as follows: ");
    for(i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
}