// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};
    int digit, i, max = 0, most;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    if (num == 0)
        freq[0]++;

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            most = i;
        }
    }

    printf("Digit occurring most times = %d\n", most);
    printf("Frequency = %d", max);

    return 0;
}