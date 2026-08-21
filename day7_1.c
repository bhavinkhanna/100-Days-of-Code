// Write a program to input a year and check whether 
// it is a leap year or not using conditional statements.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a year;\n");
    scanf("%d",&n);
    if(n%4==0){
        printf("The year entered is a leap year");
    }
    else{
        printf("The year entered is not a leap year");
    }
    return 0;
}