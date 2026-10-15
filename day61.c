
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    printf("Enter the value of k:\n");
    scanf("%d", &k);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= n - k; i++) {
        int found = 0;

        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if (found == 0) {
            printf("0 ");
        }
    }

    return 0;
}
