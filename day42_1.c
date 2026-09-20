// Count vowels and consonants in a string.
#include <stdio.h>
int main(){
    char s[100];
    printf("Enter a sentence:\n");
    scanf("%[^\n]s",s);
    int i;
    int vowelcount=0;
    int consonantcount=0;

    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vowelcount++;
            
        }
        else{
            consonantcount++;
        }

    }
    printf("Vowel=%d,consonant=%d",vowelcount,consonantcount);
    return 0;
}