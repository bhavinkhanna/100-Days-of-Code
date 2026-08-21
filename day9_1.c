// Write a program to find the roots of a quadratic 
// equation and categorize them
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d,x1,x2;
    printf("Enter the coefficient of x^2;\n");
    scanf("%f",&a);
    printf("Enter the coefficient of x;\n");
    scanf("%f",&b);
    printf("Enter the constant;\n");
    scanf("%f",&c);
    d= sqrt(b*b-4*a*c);
    x1= (-b+d)/2*a;
    x2= (-b-d)/2*a;
    if(d>0)
        printf("Two distict real roots%f %f\n",x1,x2);
    else if(d==0)    
        printf("One repeated real root%f %f\n",x1,x2);
    else
        printf("No real roots");

    return 0;
}