// Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int a[10][10], r, c;

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int k = 0; k < c; k++) {
        int i = 0, j = k;
        while (i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    for (int k = 1; k < r; k++) {
        int i = k, j = c - 1;
        while (i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}