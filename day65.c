#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    char t[100];
    int freq[26] = {0};
    printf("Enter the first string:\n");
    scanf("%[^\n]s",s);
    printf("Enter the second string:\n");
    scanf(" %[^\n]s",t);
    if(strlen(s)!=strlen(t)){
        printf("Not anagrams\n");
        
    }
   for(int i=0;s[i]!='\0';i++){
    freq[s[i]-'a']++;
   }
   for(int i=0;t[i]!='\0';i++){
    freq[t[i]-'a']--;
   }
   for(int i=0;i<=25;i++){
    if(freq[i]!=0){
        printf("Not anagrams\n");
        break;
    }
   }
   printf("Anagrams\n");
    return 0;
}