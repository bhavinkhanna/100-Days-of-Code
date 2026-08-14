#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float p,n,r,si,a,ci;
    printf("Enter your principal amount\n");
    scanf("%f",&p);
    printf("Enter number of years\n ");
    scanf("%f",&n);
    printf("Enter the rate\n");
    scanf("%f",&r);

    a=p*pow((1+r/100),n);
    ci=a-p;
    printf("The amount compounded is%f\n",a);
    printf("The compound interest is %f\n",ci);


    si= (p*n*r)/100;
    printf("The si intrest is : %f",si);

    return 0;
}
