#include <stdio.h>

int main()
{
    FILE *src, *dest;
    char source[100], destination[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", source);

    printf("Enter destination filename: ");
    scanf("%99s", destination);

    src = fopen(source, "r");

    if (src == NULL)
    {
        printf("Source file cannot be opened.\n");
        return 1;
    }

    dest = fopen(destination, "w");

    if (dest == NULL)
    {
        printf("Destination file cannot be opened.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dest);

    return 0;
}