// Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
int main(){
    char s[100];
    printf("Enter a sentence:\n");
    scanf("%[^\n]s",s);
    int i;
    while(s[i]!='\0'){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
        i++;
    }
    printf("The changed string is: %s",s);
    return 0;
}
