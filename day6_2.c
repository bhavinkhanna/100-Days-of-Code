// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if(n>0){
        printf("The number you entered is positive");
    }
    else if(n==0){
        printf("The number you entered is zero");
    }
    else{
        printf("The number you entered is negative");
    }
    return 0;
}