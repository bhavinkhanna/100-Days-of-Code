// Write a program to classify a triangle as Equilateral, 
// Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter first side:\n");
    scanf("%d",&a);
    printf("Enter second side:\n");
    scanf("%d",&b);
    printf("Enter third side:\n");
    scanf("%d",&c);
    if(a==b==c)
        printf("The triangle is equilateral one");
    else if(a==b || a==c)
        printf("The triangle is isosceles one");
    else
        printf("The triangle is scalene");    

    return 0;
}