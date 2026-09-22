// Replace spaces with hyphens in a string.
#include <stdio.h>
int main(){
    char s[100];
    printf("Enter a sentence:\n");
    scanf("%[^\n]s",s);
    int i;
    for(i=0;s[i]!='\0';i++){
       if (s[i]==' ')
       s[i]='-';
       
     
        
    }
    printf("%s",s);
    return 0;
}