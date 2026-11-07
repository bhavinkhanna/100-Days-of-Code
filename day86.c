#include <stdio.h>
enum operators{
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
};
int main(){
    enum operators op;
    int a,b;
    printf("Enter an operator (1 for ADD, 2 for SUBTRACT, 3 for MULTIPLY): ");
    scanf("%d",&op);
    if(op<1 || op>3){
        printf("Invalid operator\n");
        return 1;
    }
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    switch(op){
        case ADD:
            printf("Result: %d\n",a + b);
            break;
        case SUBTRACT:
            printf("Result: %d\n",a - b);
            break;
        case MULTIPLY:
            printf("Result: %d\n",a * b);
            break;
    }
    return 0;
}