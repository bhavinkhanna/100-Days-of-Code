// Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[]) {
    char temp[200];

    if (strlen(s1) != strlen(s2))
        return 0;

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2))
        return 1;
    else
        return 0;
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if (isRotation(s1, s2))
        printf("Rotation");
    else
        printf("Not a rotation");

    return 0;
}