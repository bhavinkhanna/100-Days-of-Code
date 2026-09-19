// Count characters in a string without using built-in length functions.
#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int r;
    printf("Enter a sentence:\n");
    scanf("%[^\n]s",s);
    r = strlen(s);
    printf("The no of characters in a string are %d",r);
    
    return 0;
}