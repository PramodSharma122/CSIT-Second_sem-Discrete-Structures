// C program to calculate x raised to the power y with user define functions.

#include<stdio.h>
int power(int,int);
void main(){
    int x,y;
    printf("Enter rhe value of x and y: ");
    scanf("%d%d",&x,&y);

    printf("The answer is %d \n",power(x,y));

}

int power(int x,int y){
    int p=1,i;
    for(i=1;i<=y;i++){
        p=x*p;
    }
    return p;

}