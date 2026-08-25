// Write a program to check if a number is a palindrome.
#include <stdio.h>
int main(){
    int n;
    printf("Enter number to be checked for palindrome:\n");
    scanf("%d",&n);
    int original = n;
    int sum = 0 , ld ,c;
    while(n!=0){
        ld = n%10;
        sum = sum + ld;
        n = n/10;
        sum = sum*10;
        
    }
    
    if(sum/10==original){
        printf("The number entered %d is palindrome\n",sum/10);
    }
    else{
        printf("The number entered is not a palindrome");
    }
    return 0;
}