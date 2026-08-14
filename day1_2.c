#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter number a\n");
    scanf("%d", &a);
    printf("Enter number b\n");
    scanf("%d", &b);
    printf("The sum of a and b is %d\n",a+b);
    printf("The diffrence of a and b is %d\n",a-b);
    printf("The product of a and b is %d\n",a*b);
    if(b!=0)
    printf("The quotient of a and b is %d\n",a/b);
    else
    printf("Division by zero is not allowed");

    return 0;
}
