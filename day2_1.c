#include <stdio.h>

int main(){
    int l,b,perimeter,area;
    printf("Enter length of a rectangle\n");
    scanf("%d", &l);
    printf("Enter breath of a rectangle\n");
    scanf("%d", &b);
    perimeter=2*(l+b);
    printf("The perimeter of rectangle is %d\n",perimeter);
    area=l*b;
    printf("The area of rectangle is %d\n",area);
    return 0;
}
