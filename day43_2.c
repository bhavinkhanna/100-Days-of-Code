// Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
int main(){
    char s[100],rev[100];
    printf("Enter a sentence:\n");
    scanf("%[^\n]s",s);
    int i=0,j=strlen(s)-1;
    for(i=0;s[i]!='\0';i++){
        rev[i]=s[i];
    }
    rev[i]='\0';
    
    i=0;

    while(i<j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    if(strcmp(s,rev)==0)
    printf("The entered string is a palindrome");

    else 
    printf("The entered string is not a palindrome");

    return 0;
}