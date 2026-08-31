// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main(){
    int n;
    float sum = 1.0;
    int num = 3,den = 4;
    printf("Enter the term till you want to add the series:\n");
    scanf("%d",&n);
    for(int i = 2; i<=n ;i++){
        sum = sum + (float)num/den;
        num = num+2;
        den = den+2;
        

    }
    printf("The sum of series upto %dth term is %f",n,sum);
}