// Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int a[100], n, k, temp[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;   

    for(int i = 0; i < n; i++)
        temp[(i + k) % n] = a[i];

    for(int i = 0; i < n; i++)
        a[i] = temp[i];

    printf("Rotated array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}