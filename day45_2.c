// Toggle case of each character in a string.

#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    printf("Enter a sentence:\n");
    scanf("%[^\n]s",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z')
        s[i] = s[i] - 32;

        else if(s[i]>='A' && s[i]<='Z')
        s[i] = s[i] + 32;
    }
    printf("String after toggling each case of character is : %s",s);
    return 0;

}