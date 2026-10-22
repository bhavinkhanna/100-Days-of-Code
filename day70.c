#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0)
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }

    
    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened.");
        return 1;
    }

    fprintf(fp, "%s", str);
    fclose(fp);

    printf("Sentence case: %s", str);
    printf("\nResult saved to output.txt");

    return 0;
}