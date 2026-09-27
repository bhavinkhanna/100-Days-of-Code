// Print the initials of a name.

#include <stdio.h>
int main(){
    char s[100];
    printf("Enter your name:\n");
    scanf("%[^\n]s,",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            printf("%c.",s[0]);
            printf("%c.",s[i+1]);
            break;
        }
    }
    
    return 0;
}