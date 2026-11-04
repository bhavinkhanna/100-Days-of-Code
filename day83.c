#include <stdio.h>

enum Months {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    enum Months month;

    for (month = JANUARY; month <= DECEMBER; month++) {
        printf("%d ", month);

        switch (month) {
            case FEBRUARY:
                printf("February - 28 days\n");
                break;

            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("30 days\n");
                break;

            default:
                printf("31 days\n");
        }
    }

    return 0;
}