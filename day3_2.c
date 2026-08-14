#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter a number a:\n");
    scanf("%d",&a);
    printf("Enter a number b:\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The swapped numbers are %d,%d",a,b);

    return 0;
}