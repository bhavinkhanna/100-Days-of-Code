#include <stdio.h>
#define pi 3.14

int main(){
    float r,area,circumfrence;
    printf("Enter radius of a circle \n");
    scanf("%f", &r);
    circumfrence=2*pi*r;
    area=pi*r*r;
    printf("The circumfrence of circle is %f\n",circumfrence);
    printf("The area of circle is %f\n",area);
    return 0;
}