// Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

void printSubstrings(char str[]) {
    int i, j, len;

    len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = 1; j <= len - i; j++) {
            printf("%.*s\n", j, str + i);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printSubstrings(str);

    return 0;
}