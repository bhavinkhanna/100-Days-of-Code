// Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char str[200], longest[200];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            longest[j++] = str[i];
        } else {
            if (j > max) {
                max = j;
                longest[j] = '\0';
            }
            j = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}