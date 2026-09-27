// Print initials of a name with the surname displayed in full.

#include <stdio.h>
int main(){
    char s[100];
    printf("Enter a full name:\n");
    scanf("%[^\n]s",s);
    int lastspace=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' '){
        printf("%c.",s[0]);
        printf("%c.",s[i+1]);
        lastspace = i;
        break;
        
        
    
        
        
    }

}
for(int i=lastspace+1;s[i]!='\0';i++){
    if(s[i]==' '){
        lastspace = i;
    }
}
for(int i=lastspace+1;s[i]!='\0';i++){
    printf("%c",s[i]);
}
return 0;
}