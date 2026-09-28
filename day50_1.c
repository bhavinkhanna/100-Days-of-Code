// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

void convertDate(char date[]) {
    int day, month, year;
    char *m[] = {"Jan","Feb","Mar","Apr","May","Jun",
                 "Jul","Aug","Sep","Oct","Nov","Dec"};

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    printf("%02d-%s-%04d", day, m[month - 1], year);
}

int main() {
    char date[20];

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    convertDate(date);

    return 0;
}