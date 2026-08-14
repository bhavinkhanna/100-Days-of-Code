#include <stdio.h>

int main(){
    int seconds, hours, minutes, second;
    printf("Enter the number of seconds you want to convert to:\n");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    second = seconds % 60;

    printf("%d seconds = %d hours, %d minutes, %d seconds\n", seconds, hours, minutes, second);
    return 0;
}