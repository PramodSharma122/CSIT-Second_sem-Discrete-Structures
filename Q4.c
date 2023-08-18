// C program to demonstrate example of floor and ceil functions.

#include<stdio.h>
#include<math.h>
void main() {
    float val;
    int fval,cval;

    printf("Enter a float value: ");
    scanf("%f",&val);

    fval=floor(val);
    cval=ceil(val);

    printf("Floor value: %d\n Ceil value: %d: ",fval,cval);
    
}