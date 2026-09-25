// Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int count[26] = {0};
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    while (s1[i] != '\0') {
        count[s1[i] - 'a']++;
        i++;
    }

    i = 0;
    while (s2[i] != '\0') {
        count[s2[i] - 'a']--;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}