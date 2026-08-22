// Write a program to implement a 
// basic calculator using switch-case for +, -, *, /, %
 #include <stdio.h>
int main(){
    float a,b;
    char c;
    printf("Enter first number:\n");
    scanf("%f",&a);
    printf("Enter second number:\n");
    scanf("%f",&b);
    printf("Enter 1-add,2-substract,3-multiplication,4-division:\n");
    scanf(" %c",&c);
    if(b==0 && c=='4')
        printf("Invalid Input");
    else{
        switch(c) {
        case '1':
            printf("The sum of two numbers is %f",a+b);
            break;

        case '2':
            printf("The difference of two numbers is %f",a-b);
            break;

        case '3':
        printf("The multiplication of two numbers is %f",a*b);
        break;

        case '4':
        printf("The division of a by b is %f",a/b);
    
        }


    }    
    return 0;
}