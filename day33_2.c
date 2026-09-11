// Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int arr[100], n, item, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &item);

    i = n - 1;

    while(i >= 0 && arr[i] > item) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = item;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}