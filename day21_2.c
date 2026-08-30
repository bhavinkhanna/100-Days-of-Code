// Write a program to check if a number is a perfect number.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number to check for perfect number:\n");
    scanf("%d", &n);
    int factors=0;

    for (int i = 1; i < n; i++) {
        if(n%i==0){
            factors = factors+i;
        }
    }
    if(factors==n)
    printf("The number is a perfect number\n");
    else
    printf("The number is not a perfect number\n");
        
        
    
    return 0;
}