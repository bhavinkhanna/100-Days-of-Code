// Count spaces, digits, and special characters in a string.
#include <stdio.h>
int main(){
    char s[100];
    printf("Enter a sentence:\n");
    scanf("%[^\n]s",s);
    int i,spaces=0,digits=0,special=0,letters=0;
    for(i=0;s[i]!='\0';i++){
      if(s[i]==' ')
      spaces++;

      else if(s[i]>='0' && s[i]<='9')
      digits++;

      else if(s[i]>='A' && s[i]<='Z')
      letters++;

      else if(s[i]>='a' && s[i]<='z')
      letters++;

      else
      special++;
    }
    printf("Spaces=%d,Digits=%d,special=%d",spaces,digits,special);
    return 0;
}