// Reverse a string.
#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("Enter a sentence:\n");
    scanf("%[^\n]s",s);
    int i=0,j=strlen(s)-1;
    while(i<j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    printf("The reversed string is %s",s);
    return 0;
}
