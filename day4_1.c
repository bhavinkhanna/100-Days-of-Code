#include <stdio.h>
int main(){
    int a,b;
    printf("Enter a number a:\n");
    scanf("%d",&a);
    printf("Enter a number b:\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;


    printf("The swapped numbers are %d,%d",a,b);

    return 0;
}
