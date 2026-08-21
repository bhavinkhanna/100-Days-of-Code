// Write a program to input a character and check whether it
//  is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main(){
    char c;
    printf("Enter a character:\n");
    scanf("%c",&c);
    if(c>='A'&& c<='Z')
        printf("Entered character is a uppercase one");
    else if(c>='a' && c<='z')
        printf("Entered character is a lowercase one");
    else if(c>='0' && c<='9')
        printf("Entered character is a digit");
    else
        printf("Entered character is a special character");        
    return 0;
}