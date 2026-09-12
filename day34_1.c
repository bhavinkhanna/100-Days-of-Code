// Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int a[100], n, pos, element, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter element: ");
    scanf("%d", &element);

    for(i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = element;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}