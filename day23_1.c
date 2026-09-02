// Write a program to find the sum of the series: 2/3 + 
// 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main(){
    int n;
    float sum = 0.0;
    int num=2,den=3;
    printf("Enter the term till want series to be added:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum = sum + (float)num/den;
        num = num + 2;
        den = den + 4;
    }
    printf("The sum of the series is: %f\n", sum);
    return 0;
}