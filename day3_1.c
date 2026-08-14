#include <stdio.h>

int main(){
    float C,Fahrenheit;
    printf("Enter temperature in celsius:\n");
    scanf("%f", &C);
    Fahrenheit=(9*C)/5+32;
    printf("The temperature in fahrenheit after conversion is %f",Fahrenheit);
    return 0;
}
