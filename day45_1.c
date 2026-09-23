// Count frequency of a given character in a string.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    char s[100];
    char x;
    printf("Enter a string:\n");
    scanf("%[^\n]s",s);
    printf("Enter the character for which you want to check frequency:\n");
    scanf(" %c",&x);
    bool flag = false;
    int count=0;
    
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==x){
            flag = true;
            count++;
        }
    }
    if(flag==false){
        printf("Frequecy=0");
    }
    else
    printf("Count = %d",count);
    
}