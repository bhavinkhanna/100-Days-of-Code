// Write a program to input three numbers and find the 
// largest among them using if–else.
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter your first number:\n");
    scanf("%d",&a);
    printf("Enter your second number:\n");
    scanf("%d",&b);
    printf("Enter your third number:\n");
    scanf("%d",&c);
    if(a>b && a>c)
        printf("a is largest");
    else if(b>a && b>c)
        printf("b is largest");
    else
        printf("c is largest");        
    return 0;
}